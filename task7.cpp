// ConsoleApplication22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

bool natural_number(int number)
{
	while (number)
	{
		if (number / 10 == 0)
			return true ;
		if (number % 10 != (number / 10) % 10) {
			return false ;
		}
		number /= 10;
	}
	return true;
}


int main()
{
		for (int i = 1;; i++)
		{
			if (natural_number(i * 18))
			{
				cout << i;
				break;
			}
		}
	
	
	system("PAUSE");
    return 0;
}

