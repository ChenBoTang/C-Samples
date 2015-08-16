#include<iostream>
#include<cstdlib>
using namespace std; 
int main()
{
  double x;
  double total;  
   
   for(double i=1,j=1;i<=1000;j*=-1,i++)           
         {x=4*j/(2*i-1);
           total=x+total;    
          }    
    
    cout<<"Á`©M="<<total;
    system("pause");
    return 0;
} 
