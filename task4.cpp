// ConsoleApplication15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const int SIZE1 = 5;
	const int SIZE2 = 2;
	double arr[SIZE1][SIZE2]=
	{{17,82},
	{29,61},
	{12 ,60},
	{88,91},
	{73,19} };
	double SUM;
	int SUM2;

	for (int row = 0; row < SIZE1; row++)
	{
		for (int col = 0; col < SIZE2; col++)
		{
			SUM = arr[row][0]/arr[row][1];
			SUM2 = SUM * 100;
			
		}
		cout << arr[row][0] << "/" << arr[row][1]<< "=";
		cout << SUM2 << "%" << endl;
	}

	system("PAUSE");
    return 0;
}

