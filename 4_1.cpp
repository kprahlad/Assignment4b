#include<iostream>
using namespace std;
int power(int x,int n,int i)
{
	if(i+1==n) return x;
	 else power(x*x,n,i+1);
}
int main()
{
	int x,n,i=1;
	cin>>x>>n;
	cout<<power(x,n,i);
	return 0;
}
