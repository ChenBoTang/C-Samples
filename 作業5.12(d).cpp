#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{ 
    for(int i=1;i<=10;i++)
  { 
   
    for(int j=10;j>i;j--)
    cout<<" "; 
    for(int k=1;k<=i;k++)
    cout<<"*";    
    cout<<endl; 
  }
    
    system("pause");
    return 0;
} 
