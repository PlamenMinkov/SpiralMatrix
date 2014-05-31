
#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int _tmain()
{
	int maxX, maxY, minX = 0, minY = 0, count = 1;
	int num;

	int arr[100][100];
	cout<<"N: ";
	cin >> num;
	maxY = num - 1;
	maxX = num - 1;
	while (count <= num*num)
	{
		for (int i = minY; i <= maxY; i++)
		{
			arr[minX][i] = count++;
		}
		minX++;
		for (int i = minX; i <= maxX; i++)
		{
			arr[i][maxY] = count++;
		}
		maxY--;
		for (int i = maxY; i >= minY; i--)
		{
			arr[maxX][i] = count++;
		}
		maxX--;
		for (int i = maxX; i >= minX; i--)
		{
			arr[i][minY] = count++;
		}
		minY++;
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (j == 0)
			{
				cout << setw(4) << arr[i][j] << setw(4);
			}
			else
			cout << arr[i][j]<<setw(4);
		}
		cout<<endl;
	}
}

