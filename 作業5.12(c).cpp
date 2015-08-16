#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for(int i=1;i<=10;i++)
   { 
   
    
    for(int j=1;j<i;j++)
    cout<<" ";
    for(int z=11;z>i;z--)
    cout<<"*";  
    cout<<endl;
    } 
       
    system("pause");
    return 0;
} 
