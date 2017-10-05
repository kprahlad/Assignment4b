#include<iostream>
using namespace std;
int print(int m,int n,int i)
{
	if(i>=m) return n;
	 else print(m,n+m-i,i+2);
}
int main()
{
	int n,i=2;
	cin>>n;
	cout<<print(n,n,i);
	return 0;
}
