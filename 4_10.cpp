#include<iostream>
using namespace std;
int print(int i,int a,int b,int c,int n)
{
    if(i==n) 
    {        
        cout<<c;
    }
    else 
    {      
		print(i+1,b,c,c+b,n);
    }
}
int main()
{
    int n;
    cout<<"Enter the limit";
    cin>>n;
    print(1,0,0,1,n);
    
return 0;
}
