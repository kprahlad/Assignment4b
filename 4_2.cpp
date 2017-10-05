#include<iostream>
using namespace std;
int print(int n,int i)
{
	cout<<i;
	if(i==n) return 1;
	 else print(n,i+1);
}
int main()
{
	int n,i=1;
	cin>>n;
	print(n,i);
	return 0;
}
