#include<iostream>
#include<math.h>
using namespace std;
int print(int n,int m)
{
	if(n==0) return m;
	 else
	 {
		m+=n%10;
		n/=10;
		print(n,m);
	 }
}
int main()
{
	int n,m=0;
	cin>>n;
	cout<<print(n,m);
	return 0;
}
