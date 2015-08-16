#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for(int i=1;i<=10;i++)
   { 
    for(int k=10;k>=i;k--)
    cout<<"*";
    cout<<endl; 
   } 
    
    
    system("pause");
    return 0;
} 
