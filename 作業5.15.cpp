#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int grade,total,counter;
    int acount=0,bcount=0,ccount=0,dcount=0,ecount=0,fcount=0; 
    double average; 
    cout<<"Enter the letter grades."<<endl<<"Enter the EOF character to end input."<<endl;
    while((grade=cin.get())!=EOF)
    {
     switch(grade)
     {
     case'A':
     case'a':
             acount++;
             break;
     case'B':
     case'b':
             bcount++;
             break;
     case'C':
     case'c':
             ccount++;
             break;
     case'D':
     case'd':
             dcount++;
             break;
     case'F':
     case'f':
             fcount++;
             break;
     case'\n':
     case'\t':
     case' ':
             break;          
     default:
             cout<<"Incorrect letter grade entered."<<"Enter a new grade."<<endl;
             break;
     }
     } 
      
   total=acount*4+bcount*3+ccount*2+dcount*1+fcount*0;
   counter= acount+bcount+ccount+dcount+fcount;
   average=static_cast<double>(total)/counter ;
   cout<<"average of all="<<average;
     system("pause");
     return 0;
} 
              
              
