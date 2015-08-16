#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include<iomanip>

using std::setw;
using std::setprecision;

int main()
{
   int x,a,b,c,d;
   cin>>x;
   a=(x/1000)+7;
   b=(x/100)%10+7;
   c=(x/10)%10+7;
   d=(x%10)+7;
   
   cout<<a<<"  "<<b<<"  "<<c<<"  "<<d<<endl;
   
system("pause");
    return 0;
}
