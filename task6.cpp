// ConsoleApplication21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int counter = 0;
	for (int N = 0; counter < 4; N++)
	{
		if (N % 2 == 1 && N % 3 == 2 && N % 4 == 3 && N % 5 == 4 && N % 6 == 5 && N % 7 == 6 && N % 8 == 7 && N % 9 == 8)
		{
			cout << N << " " << endl;
			counter++;
		}
	}

		
	system("PAUSE");
    return 0;
}

