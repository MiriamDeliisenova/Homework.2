// ConsoleApplication16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int a, b, c, N, i;
	do
	{
		cout << "Number is:";
		cin >> N;
		if (N >= 1 && N <= 40)
		{
			a = 1;
			b = 1;
			if (N < 3) cout << "Fibonacci number is" << 1 << endl;
			else
			{
				for (i = 3; i <= N; i++)
				{
					c = a + b;
					a = b;
					b = c;
				}
				cout << "Fibonacci number is:" << c << endl;
			}
		}
		cout << endl;
	} while (N >= 1 && N <= 40);

	system("PAUSE");
    return 0;
}

