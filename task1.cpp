// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 6;

int main()
{
	int sum, sum1;
	int arr[SIZE][SIZE] = { { 11,12,13,14,15,16 },
	{ 21,22,23,24,25,26 },
	{ 31,32,33,34,35,36 },
	{ 41,42,43,44,45,46 },
	{ 51,52,53,54,55,56 },
	{ 61,62,63,64,65,66 } };

	for (int row = 0; row < SIZE; row++)
	{
		for (int col = 0; col < SIZE; col++)
		{
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl;


	sum = 0;

	for (int row = 1; row < SIZE; row += 2)
	{
		sum1 = 0;
		for (int col = 0; col < SIZE; col++)
		{
			cout << arr[row][col] << " ";
			sum1 += arr[row][col];
			sum += arr[row][col];
		}
		cout << "The sum of the items in the row:" << " " << sum1 << endl;
	}
	cout << endl;
	cout << "The sum of all items in even numbers: " << " " << sum << endl;

	system("PAUSE");
	return 0;
}
