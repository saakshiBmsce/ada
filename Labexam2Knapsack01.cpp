/*

#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int KnapSack(int**b,int* wt,int* val,int V, int Wt, int n)
{
	cout << n << "," << Wt << " : " << V << " -> " << b[n][Wt] << endl;
	if ((Wt <= 0) || (n <= 0))
	{

		return V;
	}
	else if (b[n][Wt] != -1)
	{

	return b[n][Wt];
	}
	//inc
	int v1 = KnapSack(b,wt,val,V+val[n-1],Wt-wt[n-1],n-1);
	//excl
	int v2 = KnapSack(b, wt, val, V , Wt, n - 1);
	int max = (v1 > v2) ? v1 : v2;
	b[n][Wt] = max;
	cout << n << "," << Wt <<" : "<<V<< " -> " << b[n][Wt] << endl;
	return max;
}

void main()
{
	int W, n;
	cout << "Enter tot Wt bag can hold :";cin >> W;
	cout << "Enter n: ";cin >> n;
	cout << "Enter wts & values of ele: ";
	int* wt = new int[n];int* val = new int[n];
	int** b = new int* [W+1];
	for (int i = 0;i <= n;i++)
	{
		b[i] = new int[W + 1];
		for (int j = 0;j <= W;j++)
		{
			b[i][j] = -1;
		}
	}




	for (int i = 0;i < n;i++)
	{
		cout << "wt: ";
		cin >> wt[i];
		cout << "val: ";
		cin >> val[i];
	}

	int x = KnapSack(b,wt,val,0,W,n);
	cout << "The ans is: " << x;
	for (int i = 0;i <= n;i++)
	{
		for (int j = 0;j <= W;j++)
		{
			cout << b[i][j] << "  ";
		}cout << endl;
	}
}

*/