#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int k=a[i];
		int j=i-1;
		while((a[j]>a[j+1])&&(j>=0))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j]=k;
		
	}
	
	for(int i=0;i<n;i++)
	{cout<<a[i]<<endl;}
}
int main()
{
	int n;
	n=10;
	cout<<"Enter elements :"<<endl;
	int a[]={9,8,7,6,5,4,3,2,1,0};
	/*for(int i=0;i<n;i++)
	cin>>a[i];*/
	insertionSort(a,n);
	cout<<"sorted array: "<<endl;
	
	
}
