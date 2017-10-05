#include<iostream>
using namespace std;
int print(int a[],int i,int n,int max,int min)
{
    if(i==n) 
    {
        cout<<max<<min;        
        return 0;
    }
    else 
    {
        if(a[i]>max) max=a[i];
        if(a[x]<min) min=a[i];        
        print(a,i+1,n,max,min);
    }
}
int main()
{
    int a[5];
    cout<<"Enter the array";
    for(int i=0;i<5;i++) cin>>a[i];
    print(a,0,5,a[0],a[0]);
    
return 0;
}
