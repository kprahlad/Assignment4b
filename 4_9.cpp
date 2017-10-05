#include<iostream>
using namespace std;
int print(int a)
{
    if(a==1) 
    {        
        return 1;
    }
    else 
    {      
        return a*print(a-1);
    }
}
int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    cout<<print(a);
    
return 0;
}
