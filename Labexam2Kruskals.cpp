/*

#include<stdio.h>
#include<iostream>
#include<list>
#include<vector>

using namespace std;

struct edge {
	int x;int y;int wt;
};
vector<edge> addEdge(int** a, int x, int y, int wt,vector<edge> edges)
{
	a[x][y] = wt;
	a[y][x] = wt;
	edge e;e.x = x;e.wt = wt;e.y=y;
	edges.push_back(e);
	return edges;
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


//-----------------sort------------------------

vector<edge> EdgeSort(vector<edge> arr, int n)
{
	int i, j, min_idx;int t1, t2, t3;
	for (i = 0; i < n - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j].wt < arr[min_idx].wt)min_idx = j;

		t1 = arr[i].wt;
		arr[i].wt= arr[min_idx].wt;
		arr[min_idx].wt = t1;

		t2 = arr[i].x;
		arr[i].x = arr[min_idx].x;
		arr[min_idx].x = t2;

		t3 = arr[i].y;
		arr[i].y = arr[min_idx].y;
		arr[min_idx].y = t3;
	}
	return arr;
}
//------------------sort--------------------


void Kruskals(int** a, int n, vector<edge>edges)
{
	int* comp = new int[n];
	for (int i = 0;i < n;i++) { comp[i] = i; }
	vector<edge> treeEdge;
	vector<edge> ::iterator it;
	edges = EdgeSort(edges, n);
	edge e;
	int c;
	for (int j = 0;j < n;j++)cout << comp[j] << "  ";
	for (int i = 0;i < n-1;i++)
	{
		e = edges[i];
		cout << edges[i].x << "," << edges[i].y << endl;
		if (comp[e.x] != comp[e.y])
		{
			c = comp[e.x];
			treeEdge.push_back(e);
			for (it = treeEdge.begin();it != treeEdge.end();it++)
			{
				if ((comp[it->x] == comp[e.x]) || (comp[it->x] == comp[e.y]))
				{
					comp[it->x] = c;
				}
			}

		}
		for (int j = 0;j < n;j++)cout << comp[j] << "  ";
		cout << endl;
	}

	for (it = treeEdge.begin();it != treeEdge.end();it++)
	{
		cout << it->x << "," << it->y << "->";
	}
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
	vector<edge> edges;
	edges=addEdge(a, 0, 1, 10, edges);
	edges = addEdge(a, 0, 2, 80,edges);
	edges = addEdge(a, 1, 2, 6, edges);
	edges = addEdge(a, 1, 4, 20, edges);
	edges = addEdge(a, 2, 3, 70, edges);
	edges = addEdge(a, 4, 5, 10, edges);
	edges = addEdge(a, 4, 6, 10, edges);
	edges = addEdge(a, 5, 6, 5, edges);
	for (int i = 0;i < n;i++)
	{
		cout << edges[i].x << "," << edges[i].y << " :" << edges[i].wt << " -> ";
	}
	cout << endl;
	Kruskals(a,n,edges);
}

*/