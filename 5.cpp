#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int n1,n2,n3,n4,n5;
    int a,b,c,d,e;
    cout<<"��J���Ӿ��:"<<endl; 
/**********��J�Ĥ@�өM�ĤG�ӼƦr**************/ 
    cin>>a;
    cin>>b;
    if(a>b)
    {
           n2=a;
           n1=b;
    }
    else
    {
           n2=b;
           n1=a;
    }
/***********��J�ĤT�ӼƦr**********************/
    cin>>c;
    if(c>n2)
           n3=c;
    else 
    {
         n3=n2;
         if(c>n1)
           n2=c;
         else 
         {
            int i;
            i=n1;
            n1=c;
            n2=i;
         }
    }
/***************��J�ĥ|�ӼƦr********************/  
   cin>>d;
    if(d>n3)
           n4=d;
    else 
    {
    n4=n3;
         if(d>n2)
         {
           n3=d;
         }
         else 
         {
           n3=n2;
           if(d>n1)
                  n2=d;
           else
           {
                  int i;
                  i=n1;
                  n1=d;
                  n2=i;
           }
         }
    }
/*****************��J�Ĥ��ӼƦr*********************/
  cin>>e;
    if(e>n4)
           n5=e;
    else 
    {
    n5=n4;
         if(e>n3)
           n4=e;
         else 
         {
           n4=n3;
           if(e>n2)
             n3=e;
           else
           {
               if(e>n1)
                 n2=e;
               else
               {    
                  int i;
                  i=n1;
                  n1=e;
                  n2=i;
               }
           }
         }
    }
/*********************************/   
     cout<<"�Ѥj�p��p�ƦC"<<endl; 
     cout<<n5<<"\t"<<n4<<"\t"<<n3<<"\t"<<n2<<"\t"<<n1<<endl;
     
                        
    system("pause");
    return 0;
}
