/*
#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
using namespace std;

void Warshalls(int a[4][4],int n)
{
	int r, c;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (a[j][i] == 1)
			{
				for (int k = 0;k < n;k++)
				{
					if (a[i][k] == 1) {
						a[j][k] = 1;

					}
				}
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	int a[4][4] = { {0,1,0,0},
					{0,0,0,1},
					{0,0,0,0},
					{1,1,1,0} };
	Warshalls(a,4);
}

*/