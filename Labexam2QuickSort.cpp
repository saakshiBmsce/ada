/*

#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int partition(int* a, int p, int s, int n)
{
	int i = s;int j = n - 1;int t;
	//test
	cout << "p: " << s << "," << n << ":" << p << endl;
	while (i < j)
	{
		cout << i << "," << j << "->" << endl;
		while ((a[i] < p) && (i < n))
		{
			cout << "i while " << a[i] << p << " -> ";
			i++;
		}
		cout << a[j] << endl;
		while ((a[j] > p) && (j > 0))
		{
			cout << "i while" << a[j] << p << " -> ";
			j--;
		}
		cout << "after " << i << "," << j << endl;
		t = a[j];
		a[j] = a[i];
		a[i] = t;
		if (i == j)break;
		i++;
		j--;

	}
	t = a[n];
	a[n] = a[i];
	a[i] = t;

	return i;
}

void Quicksort(int* a, int s, int e)
{
	cout << "QS: " << s << "," << e << " -> " << endl;;
	if (s == e) { return; }
	if (s < e)
	{
		int t = partition(a, a[e], s, e);
		cout << endl;
		for (int i = s;i < e;i++)
		{
			cout << a[i] << "->";
		}
		cout << endl;
		Quicksort(a, s, t - 1);
		Quicksort(a, t + 1, e);
	}

}

void main()
{
	int n;
	cout << "Enter no of elements: " << endl;
	cin >> n;
	int* a = new int[n];
	cout << "Unsorted array is: " << endl;
	for (int i = 0;i < n;i++)
	{
		a[i] = 10 - i;
		cout << a[i] << "  ";
	}
	cout << endl;

	Quicksort(a, 0, n - 1);

	//int c = partition(a,a[n-1],0,n-1);


	cout << "Sorted array is: " << endl;
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}
*/