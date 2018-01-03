// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int const SIZE1 = 5;
	int const SIZE2 = 4;
	int arr1[SIZE1][SIZE2] =
	{{ 11, 17, 4, 10},
	 {29, 4, 18, 18},
	 {22, 14, 5, 5},
	 {1, 27, 1, 11},
     {25, 2, 27, 6}};
	for (int row = 0; row < SIZE1; row++)
	{
		for (int col = 0; col < SIZE2; col++)
		{
			cout << arr1[row][col] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int arr2[SIZE1][SIZE2] =
	{ {1, 1, 1, 1},
	  {1, 1, 1, 1},
	  {1, 1, 1, 1},
	  {1, 1, 1, 1},
	  {1, 1, 1, 1} };
	
	int SUM = 0;
	for (int row = 0; row < SIZE1; row++)
	{
		for (int col = 0; col < SIZE2; col++)
		{
			cout << arr2[row][col] << " "; 
			SUM += arr2[row][col];
		}
		cout << endl;
	}
	cout << "The sum of numbers is:" << SUM;
	cout << endl;
	
	int arr3[SIZE1][SIZE2];
	{
		for (int row = 0; row < SIZE1; row++)
		{
			for (int col = 0; col < SIZE2; col++)
			{
				arr3[row][col] = SUM * arr1[row][col];
				cout << arr3[row][col] << " ";
			}
			cout << endl;
		}
	}


	system("PAUSE");
    return 0;
}

