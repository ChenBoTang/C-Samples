#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int x; 
    cout<<"Enter an odd number: ";
    cin>>x; 
    if(x%2==0)
    cout<<"error";
    else
  { 
    for(int i=1;i<=x;i+=2)
    {
           
            for(int j=19;j>((i+1)/2);j--)
            cout<<" ";
            for(int k=1;k<=i;k++)
            cout<<"*";
            cout<<endl;
    }
    
    for(int y=x-2;y>=1;y-=2)
    {
           
            for(int a=19;a>((y+1)/2);a--) 
            cout<<" ";
            for(int b=1;b<=y;b++)
            cout<<"*";
            cout<<endl;
    }
    }
    system("pause");
    return 0; 
 
} 
