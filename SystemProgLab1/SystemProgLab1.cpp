// SystemProgLab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int* A = new int [4];
	for (int i = 0; i < 4; i++) {
		A[i] = i+3;
	}

	cin >> a >> b;

	_asm
	{
		mov   eax, a
		cmp   eax, b
		je L; je(a = b)
		mov   eax, b
		L : mov   c, eax
	}
	if (c == a) cout << "a=b" << endl;

	_asm
	{
		mov eax, a
		mov ebx, b

		add eax, ebx

		mov c, eax
	}

	cout << "ADD: " << c << endl;

	_asm
	{
		mov eax, a
		mov ebx, b

		sub eax, ebx

		mov c, eax
	}

	cout << "SUB: " << c << endl;

	_asm
	{
		mov eax, a
		mov ebx, b

		mul ebx

		mov c, eax
	}

	cout << "MUL: " << c << endl;

	_asm
	{
		mov eax, a
		mov ebx, b
		mov edx, 0

		div ebx

		mov c, eax
	}

	cout << "DIV: " << c << endl;

	

	_asm
	{
		mov eax, a

		not eax

		mov c, eax
	}
	cout << "NOT: " << c << endl;

	_asm
	{
		mov eax, a
		mov ebx, b

		and eax, ebx

		mov c, eax
	}
	cout << "AND: " << c << endl;

	_asm
	{
		mov eax, a
		mov ebx, b

		or eax, ebx

		mov c, eax
	}
	cout << "OR: " << c << endl;

	_asm
	{
		mov eax, a
		mov ebx, b

		xor eax, ebx

		mov c, eax
	}
	cout << "XOR: " << c << endl;

	for (int i = 0;i < 4;i++)
	{
		_asm
		{
			mov esi, i
			mov eax, A

			mov ebx, [4 * esi + eax]

			mov c, ebx
		}

		cout << "A[" << i << "]: " << c << endl;
	}

	_asm
	{
		mov eax, a

		shl eax, 3

		mov c, eax
	}
	cout << "SHL(sdvig vlevo Logic): " << c << endl;

	_asm
	{
		mov eax, a

		sal eax, 3

		mov c, eax
	}
	cout << "SHL(sdvig vlevo Arifmet): " << c << endl;

	_asm
	{
		mov eax, a

		rol eax, 3

		mov c, eax
	}
	cout << "SHL(sdvig vlevo Cicl): " << c << endl;
}

