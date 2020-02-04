#include<iostream>
using namespace std;
int main()
{
	int noOfTest;
	cin>>noOfTest;
	for(int i=0;i<noOfTest;i++)
	{
		int len,key;int arr[15];int res=-1;cout<<"enter len and key"<<endl;
		cin>>len>>key;
		

		for(int j=0;j<len;j++)
		{	
			cin>>arr[j];cout<<"Entered";
			//if(arr[j]==key)res=1;
		}

		
		int l=0;int h=len-1;int m;
		while(l<=h)
		{
			m=(l+h)/2;
			if(key<arr[m])h=m-1;
			else if(key>arr[m])l=m+1;
			else {res=1;break;}
		}
		cout<<res;
	}
}
