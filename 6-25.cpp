#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#include<cmath>
int main()
{
    int number,n=1;
    cout<<"Enter the number"<<endl;
    cin>>number;
    double a=number;
    while(1)
    {
            if((a/10) !=0)
            { 
                        a=a/10;
                        n++; 
            } 
            else
                        break;
    } 
    cout<<"The number  ¬°"<<n<<"¦ì¤¸"<<endl;
    double c=0;
    double b=0;
   double q;
    for(int i=n;i>=1;i--)
    {

           
            
            b=number/double(pow10(i-1));
            c=number%double(pow10(i-1));
            cout<<b<<endl;
            cout<<" "<<q<<endl;
            number=c;
            /*
            if(b<10)
                    c[i]=b;
            else
            {
                for(int j=1;j<n;j++)
                    c[i]=b%int (pow(10,j));
                    
            }
             cout<<c[i]<<"    "<<b<<endl;
              */     
    }

    
                    
   
     
    system("pause");
    return 0;
}
