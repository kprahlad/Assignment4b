#include<iostream>
using namespace std;
int print(int a,int b,int i)
{    
        if(a%i==0&&b%i==0) return i;
		  else print(a,b,i-1);
}
int main()
{
    int a,b;
    cout<<"Enter the numbers";
    cin>>a>>b;
    cout<<print(a,b,a);
    
return 0;
}
