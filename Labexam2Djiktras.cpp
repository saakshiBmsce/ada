/*
#include<stdio.h>
#include<iostream>
#include<list>
#include<vector>

using namespace std;

struct edge {
	int x;int y;int wt;
};
void addEdge(int** a, int x, int y, int wt)
{
	a[x][y] = wt;
	a[y][x] = wt;
}

void printEdge(int** a, int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

void djiktras(int **a,int n,int u)
{
	int* min_dis = new int[n];
	int* visited = new int[n];
	for (int i = 0;i < n;i++)
	{
		min_dis[i] = INT_MAX;
		visited[i] = 0;
	}

	min_dis[u] = 0;

	for (int cnt = 0;cnt < n;cnt++)
	{
		cout << u << endl;
		for (int i = 0;i < n;i++)
		{
			if (a[u][i] != -1)
			{
				if (min_dis[i] > (min_dis[u] + a[u][i]))
				{
					min_dis[i] = min_dis[u] + a[u][i];
				}
			}
		}
		for (int i = 0;i < n;i++)
		{
			cout << min_dis[i] << " -> ";
		}
		cout << endl;
		visited[u] = 1;
		int min = INT_MAX;int mini = 0;
		for (int i = 0;i < n;i++)
		{
			if (visited[i] == 0)
			{
				if (min > min_dis[i])
				{
					min=min_dis[i];
					mini = i;
				}
			}

		}
		u = mini;
	}

	cout << endl;
	for (int x = 0;x < n;x++)
	{
		cout << min_dis[x] << endl;
	}
	cout << endl;
}

void main()
{
	int n = 7;
	int** a = new int* [n];
	for (int i = 0;i < n;i++)
	{
		a[i] = new int[n];
		for (int j = 0;j < n;j++)
		{
			a[i][j] = -1;
		}
	}
	addEdge(a, 0, 1, 10);
	addEdge(a, 0, 2, 80);
	addEdge(a, 1, 2, 6);
	addEdge(a, 1, 4, 20);
	addEdge(a, 2, 3, 70);
	addEdge(a, 4, 5, 10);
	addEdge(a, 4, 6, 10);
	addEdge(a, 5, 6, 5);

	djiktras(a,n,0);
}


*/