/*

#include<stdio.h>
#include<iostream>
#include<list>
#include<vector>

using namespace std;

struct edge {
	int x;int y;int wt;
};
void addEdge(int**a,int x, int y, int wt)
{
	a[x][y] = wt;
	a[y][x] = wt;
}

void printEdge(int**a,int n)
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

void Prims(int** a, int n,int u)
{
	edge e;
	vector<edge> TreeEdge;
	int* disTV = new int[n];
	int* visited = new int[n];
	int* nv = new int[n];
	for (int i = 0;i < n;i++)
	{

		visited[i] = 0;
		disTV[i] = INT_MAX;
		nv[i] = -1;

	}

	disTV[u] = 0;
	visited[u] = 1;


	for(int cnt=0;cnt<n-1;cnt++)
	{
		for (int i = 0;i < n;i++)
		{
			if (a[u][i] != -1)
			{
				if ((a[u][i] + disTV[u]) < disTV[i])
				{
					nv[i] = u;
					disTV[i] = a[u][i] + disTV[u];
				}
			}
		}
		int min = INT_MAX;;int mini = 0;
		for (int i = 0;i < n;i++)
		{
			if (visited[i] == 0)
			{
				if (disTV[i] < min)
				{
					min = disTV[i];
					mini = i;
				}
			}
		}
		e.y = mini;e.x = nv[mini];
		TreeEdge.push_back(e);
		u = mini;
		visited[u] = 1;
	}


	vector<edge>::iterator it;
	for (it = TreeEdge.begin();it != TreeEdge.end();it++)
	{
		cout << "("<<it->x << "," << it->y << ") -> ";
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
	addEdge(a,0,1,10);
	addEdge(a, 0, 2, 18);
	addEdge(a, 1, 2, 6);
	addEdge(a, 1, 4, 20);
	addEdge(a, 2, 3, 70);
	addEdge(a, 4, 5, 10);
	addEdge(a, 4, 6, 10);
	addEdge(a, 5, 6, 5);

	Prims(a,n,0);
}

*/