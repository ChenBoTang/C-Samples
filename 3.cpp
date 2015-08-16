#include <iostream>
using std::cin;
using std::cout;
using std::endl;
class GradeBook
{
public:
       void getGrade();
       int highest();
       int lowest();       
private:
        int aGrade;
        int bGrade;
        int cGrade;
        int dGrade;
        int eGrade;      
};
void GradeBook::getGrade()
{
     cout<<"Enter five number range of 1 to 100."<<endl;
     int i;
    
     cin>>aGrade>>bGrade>>cGrade>>dGrade>>eGrade;   
}
int GradeBook::highest()
{
   int a;
    a=aGrade;
    while(1)
    {
    if(a<bGrade)
                a=bGrade;
    if(a<cGrade)
                a=cGrade;
    if(a<dGrade)
                a=dGrade;
    if(a<eGrade)
                a=eGrade;
    else
        break;  
    }  
   
    return a;          
    /*int a,b,c,d;
    if(aGrade<bGrade)
          a=bGrade;
    else
          a=aGrade;             
    if(cGrade<dGrade)
          b=dGrade;
    else
          b=cGrade;
    if(a<b)
           c=b;
    else
           c=a;
    if(c<eGrade)
           d=eGrade;
    else
           d=c;
    return d;*/
}
int GradeBook::lowest()
{
    int a;
    a=aGrade;
    while(1)
    {
    if(a>bGrade)
                a=bGrade;
    if(a>cGrade)
                a=cGrade;
    if(a>dGrade)
                a=dGrade;
    if(a>eGrade)
                a=eGrade;
    else
        break;  
    }  
    return a;   
    
    /*int a,b,c,d;
    if(aGrade>bGrade)
          a=bGrade;
    else
          a=aGrade;             
    if(cGrade>dGrade)
          b=dGrade;
    else
          b=cGrade;
    if(a>b)
           c=b;
    else
           c=a;
    if(c>eGrade)
           d=eGrade;
    else
           d=c;
    return d;*/
}
int main()
{
    GradeBook myGradeBook;
    myGradeBook.getGrade();
    cout<<"The highest number is "<<myGradeBook.highest()<<endl;
    cout<<"The lowest number is "<<myGradeBook.lowest()<<endl;
    system("pause");
    return 0;
}
