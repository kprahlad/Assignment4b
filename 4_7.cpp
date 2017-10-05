#include<iostream>
#include<math.h>
using namespace std;
int length(int x)
{
	int i=0;
	while(x!=0) 
	{
		i++;
		x/=10;
	}
	return i-1;
}
int print(int n,int m)
{
	if(n==0) return m;
	 else
	 {
		m+=n%10*pow(10,length(n));
		n/=10;
		print(n,m);
	 }
}
int main()
{
	int n,m=0;
	cin>>n;
	if(print(n,m)==n) cout<<"Palindrome!";
	 else cout<<"Nope."
	return 0;
}
