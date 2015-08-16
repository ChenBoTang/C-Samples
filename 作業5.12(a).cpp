#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for(int i=1;i<11;i++)
   { 
    for(int k=1;k<=i;k++)
    cout<<"*";
    for(int k=11;k>i;k--)
    cout<<" ";
    for(int k=11;k>i;k--)
    cout<<"*";
    for(int k=1;k<2*i;k++)
    cout<<" ";
    for(int k=11;k>i;k--)
    cout<<"*"; 
    for(int k=11;k>i;k--)
    cout<<" "; 
    for(int k=1;k<=i;k++)
    cout<<"*";      
    cout<<endl; 
    }
    
    system("pause");
    return 0;
} 
