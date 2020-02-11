#include<bits/stdc++.h>
using namespace std;
void toh(string f,string t,string tmp,int n)
{
	if(n==1)
	{cout<<"move from"<<f<<"to"<<t<<endl;}
	else
	{
		toh(f,tmp,t,n-1);
		cout<<"move from"<<f<<"to"<<t<<endl;
		toh(tmp,t,f,n-1);
	}
}

int main()
{
	int n;
	cout<<"enter n:  ";
	cin>>n;
	toh(" Source tower "," Destination tower "," Temporary tower ",n);
	
}


