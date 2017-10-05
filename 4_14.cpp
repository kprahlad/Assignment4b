#include<iostream>
using namespace std;
int print(int a[],int i,int n,int s)
{
    if(i==n) 
    {
        cout<<s;        
        return 0;
    }
    else 
    {
        print(a,i+1,n,s+a[i]);
    }
}
int main()
{
    int a[5];
    cout<<"Enter the array";
    for(int i=0;i<5;i++) cin>>a[i];
    print(a,0,5,0);
    
return 0;
}

