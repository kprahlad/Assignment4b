#include<iostream>
using namespace std;
int print(int a[],int i,int n)
{
    if(i==n) return 0;
    else 
    {
        cout<<a[i];
        print(a,i+1,n);
    }
}
int main()
{
    int a[5];
    cout<<"Enter the array";
    for(int i=0;i<5;i++) cin>>a[i];
    print(a,0,5);
    
return 0;
}
