// ConsoleApplication20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "The number is:";
	cin >> N;
	int num1, num2, num3, S;
	num1 = N / 100;
	num2 = (N / 10) % 10;
	num3 = N % 10;
	S = num1 + num2 + num3;
	if (N > 111 && N < 22222)
	{
		if (N % S == 0)
		{
			cout << "Deli se";
		}
		else
		{
			cout << " Ne se deli";
		}
	}
	else
	{
		cout << "Chisloto ne e v intervala";
	}

	
		
	system("PAUSE");
    return 0;
}

