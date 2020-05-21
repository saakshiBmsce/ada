/*

#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int parent(int x)
{
	if (x == 0)return -1;
	else return ((x + 1) / 2) - 1;
}

int left(int x, int n)
{
	if ((2 * (x + 1) - 1) < n)return (2 * (x + 1) - 1);
	else return -1;
}


int right(int x, int n)
{
	if ((2 * (x + 1)) < n)return (2 * (x + 1));
	else return -1;
}


void Heapify(int* a,int n,int root)
{
	cout << "heapifying " << root << endl;
	int r = root;
	int lft = left(r, n);
	int rgt = right(r, n);
	int min;
	int t;
	while (1)
	{
		if ((lft == -1) && (rgt == -1))break;
		else if ((lft != -1) && (rgt == -1)) { min = lft;if (a[min] > a[r])break; }
		else if ((lft == -1) && (rgt != -1)) { min = rgt;if (a[min] > a[r])break; }
		else
			min = (a[lft] < a[rgt]) ? lft : rgt;
		if ((lft != -1) && (rgt != -1))
		{
			if ((a[r] < a[lft]) && (a[r] < a[rgt]))break;
		}
		cout << "swapping " << a[min] << "," << a[r] << endl;
			t = a[min];
			a[min] = a[r];
			a[r] = t;
			r = min;


		lft = left(r, n);
		rgt = right(r, n);

	}
}

void deleteMin(int* a, int n)
{
	int min = a[0];
	a[0] = a[n - 1];
	a[n - 1] = min;
	Heapify(a, n - 1, 0);
	cout << endl;
	cout << "Deleted min " << a[0];
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}

void Heapsort(int* a,int s,int e)
{
	for (int i = e;i >= 0;i--)
	{
		Heapify(a,e,i);
	}
	cout << endl;

	cout << endl;
	for (int i = 0;i <=e;i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
	cout << endl;
	cout << "Del min starting:" << endl;
	for(int i=e;i>=0;i--)deleteMin(a,i+1);
}

void main()
{
	int n;
	cout << "Enter no of elements: " << endl;
	cin >> n;
	int* a = new int[n];
	cout << "Unsorted array is: " << endl;
	a[0] = 8;
	a[1] = 6;
	a[2] = 3;
	a[3] = 5;
	a[4] = 9;
	a[5] = 0;
	a[6] = 2;
	a[7] = 7;
	cout << endl;

	Heapsort(a,0,n-1);

	//int c = partition(a,a[n-1],0,n-1);


	cout << "Sorted array is: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}
*/