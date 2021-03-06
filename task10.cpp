// ConsoleApplication23.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int SIZE = 100000;
int number(int arr[], int room, int guests)
{
	int i,additional, br;
	br = guests / room;
	additional = guests % room;
	for ( i = 0; i < br; i++) arr[i] = room;
	arr[br] = additional;
	if (room - additional == 1)
	{
		arr[br] = additional;
	}
	else
	{
		i = br;
		do
		{
			i--;
			if (i < 0)i = br - 1;
			arr[i]--;
			arr[br]++; 
		} 
		while (arr[i] > arr[br]);
	}
	br++;
	return br;
}

int main()
{ 
	int arr[SIZE], filled, N, K;
	cout << "Number of guests [40-10040]: ";
	cin >> N;
	cout << "Room capacity [10-20]: "; 
	cin >> K; 
	filled= number(arr,K, N);
	for (int i = 0; i < filled; i++)
	{
		cout << arr[i] << "; ";
	}
	cout << endl;


	system("pause");
	return 0;

}

