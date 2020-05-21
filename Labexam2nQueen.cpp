/*

#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>

using namespace std;


int isSafe(int** board, int r, int c,int n)
{
	int j;
	for (int i = 0;i < c;i++)
	{
		if (board[r][i] == 1)return 0;
	}
	for (int i = r,j=c;(i>=0)&&(j>=0);i--,j--)
	{
		if (board[i][j] == 1)return 0;
	}
	for (int i = r, j = c;(i < n) && (j >= 0);i++, j--)
	{
		if (board[i][j] == 1)return 0;
	}

	return 1;
}

int nQueens(int**board,int n,int col)
{
	if (col >= n)return 1;
	for (int i = 0;i < n;i++)
	{
		if (isSafe(board, i, col,n) == 1)
		{
			board[i][col] = 1;
			if (nQueens(board, n, col + 1) == 1)return 1;
			board[i][col] = 0;

		}
	}
}
int main()
{
	int n = 8;
	int** board = new int* [n];
	for (int i = 0;i < n;i++)
	{
		board[i] = new int[n];
		for (int j = 0;j < n;j++)
		{
			board[i][j] = 0;
		}
	}
	if (nQueens(board, n, 0) == 0) { cout << "No soln"; }

		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				cout << board[i][j] << "  ";
			}
			cout << endl;
		}

}

*/