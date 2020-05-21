/*
#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
using namespace std;

void Floyds(int a[4][4] ,int n)
{
	int** b = new int* [n];
	for (int i = 0;i < n;i++)
	{
		b[i] = new int[n];
		for (int j = 0;j < n;j++)
		{
			if (a[i][j] != 0)b[i][j] = a[i][j];
			else b[i][j] = INT_MAX;
		}
	}
	for (int k = 0;k < n;k++)
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				if ((b[i][k] != INT_MAX) && (b[k][j] != INT_MAX))
				{
					b[i][j] = (b[i][j] < (b[i][k] + b[k][j])) ? b[i][j] : (b[i][k] + b[k][j]);
				}

			}
		}
	}

	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << b[i][j] << "  ";
		}
		cout << endl;
	}
}

void main()
{
	int n = 4;
	int a[4][4] = {
				  {0,0,3,0},
				  {2,0,0,0},
				  {0,7,0,1},
				  {6,0,0,0}, };
	Floyds(a,n);
}

*/