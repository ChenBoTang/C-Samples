#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::left;
using std::right;
#include<iomanip>
using std::setw;
using std::setprecision;
#include<cmath>
using std::pow;
#include<string>
using std::string;
using std::getline;
int main()
{
   for(int i=1;i<=3;i++)
   {
           for(int j=1;j<=3;j++)
           {
                   for(int k=1;k<=4;k++)
                   cout<<"* ";
           cout<<endl;
           }
           cout<<endl;
   }
    system("pause");
    return 0;
}
