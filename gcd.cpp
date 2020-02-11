#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a and b: ";
	cin>>a>>b;
	while((a!=b))
	{
		if(a>b)a=a-b;
		else if(a<b)b=b-a;
	}
	cout<<"gcd id: "<<a<<endl;
	
	
}
