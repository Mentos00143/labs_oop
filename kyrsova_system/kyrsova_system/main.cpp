#include <iostream>
using namespace std;
void main()
{
	__asm
	{
		model tiny
			node_tree		struc
			symbol		db	0
			l_son		dd	0
			r_son		dd	0
			ends
			desc_stk		struc
			ends
			create_stk	macro 	HandHead : REQ.descr : REQ.SizeStk : = <256>
			endm
			push_stk		macro	descr : REQ.rg_item : REQ
			endm
			pop_stk		macro	descr : REQ.rg_item : REQ
			endm
			.data
			mas		db	37h, 12h, Bh, 65h, 4h, 54h, 11h, 02h, 32h, 5h
			db	4h, 84h, 7h, 21h, 65h, 45h, 22h, 11h, 77h, 51h
			db 	26h, 73h, 35h, 15h, 49h, 37h, 52h
			l_mas = $ - mas
			ordered_array	db	l_mas dup(0)
			doubleWord_stk	desc_stc <>
			count_call	dd	0
			.code
			BuildBinTree	proc
			; ------------HANDLE GetProcessHeap(VOID)
			call	GetProcessHeap
			mov	Hand_Head, eax
			xor	ebx, ebx
			; ------------LPVOID HeapAlloc(HANDLE hHeap, DWORD dwFlags, DWORD dwBytes)
			push 	type node_tree
			push	0
			push	eax
			call 	HeapAlloc
			mov 	HeadTree, eax
			mov 	ebx, eax
			push 	ds
			pop	es
			mov 	edi, eax
			mov 	ecx, type node_tree
			xor	al, al
			cld
			rep stosb
			lea	esi, mas
			lodsb
			mov[ebx].symbol, al
			mov 	ecx, l_mas - 1
			; ------------LPVOID HeapAlloc(HANDLE hHeap, DWORD dwFlags, DWORD dwBytes)
			@@cycl1:	push 	ecx
			push	type node_tree
			push	0
			push	Hand_Head
			call 	HeapAlloc
			pop 	ecx
			mov	ebx, eax
			mov	NewNode, eax
			mov	edi, eax
			push	ecx
			mov 	ecx, type node_tree
			xor	al, al
			cld
			rep	stosb
			pop	ecx
			lodsb
			mov [ebx].symbol, al
			mov 	ebx, HeadTree
		m_search : cmp	al, [ebx].symbol
				   mov	edi, ebx
				   jae	m1
				   mov	ebx, [ebx].l_son
				   test	ebx, ebx
				   jnz	m_search
				   mov	ebx, NewNode
				   mov[edi].l_son, ebx
				   jmp	end_cycl1
			   m1 : mov	ebx, [ebx].r_son
					test	ebx, ebx
					jnz	m_search
					mov	ebx, NewNode
					mov[edi].r_son, ebx
				end_cycl1 : loop	@@cycl1
							ret
							BuildBinTree	endp
							LRBeat		proc
							inc	count_call
							test	ebx, ebx
							jz	@@exit_p
							mov	ebx, [ebx].l_son
							test	ebx, ebx
							jz	@@m1
							push_stk	 doubleWord_stk.ebx
							@@m1:		call	LEBeat
							pop_stk	doubleWord_stk.ebx
							jnc	@@m2
							mov	ecx, count_call
							dec	ecx
							pop 	NewNode
							loop	$ - 6
							jmp	@@exit_p
							@@m2		mov	al, [ebx].symbol
							cld
							stosb
							mov	ebx, [ebx].r_son
							test	ebx, ebx
							jz	@@m1
							push_stk	 doubleWord_stk.ebx
							call	LRBeat
							@@exit_p:	dec	count_call
							ret
							LRBeat		endp
							Start		proc	near
							call	BuildBinTree
							create_stk Hand_Head.doubleWord_stk
							push	ds
							pop	es
							lea	edi, ordered_array
							mov	ebx, HeadTree
							push_stk	 doubleWord_stk.ebx
							call	LRBeat
							; ...
							end
	}
	system("pause>>void");
}