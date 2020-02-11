#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	int l=0;int n;
	cout<<"Enter n: ";
	cin>>n;
	int h=n;
	int arr[10];int key;
	cout<<"Enter array ele"<<endl;
	for(int i=0;i<n;i++)
	{cin>>arr[i];}
	cout<<"Enter key: ";
	cin>>key;
	int m;
	while(l<=h)
	{
		m=(l+h)/2;cout<<"mid id: "<<arr[m]<<endl;
		if(arr[m]>key)
		{h=m-1;}
		else if(arr[m]<key)
		{l=m+1;}
		else
		{cout<<m<<endl;break;}
	}
	int i=m-1;
	while(arr[i]==key)
	{cout<<i--<<endl;}
	i=m+1;
	while(arr[i]==key)
	{cout<<i++<<endl;}
	
}
