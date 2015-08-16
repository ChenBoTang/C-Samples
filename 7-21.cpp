#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void some(int b[],int c,int s)
{
     if(c<s)
     {
      some(b,c+1,s);
      cout<<b[c]<<" ";
      } 
}
int main()
{
    const int size=10;
    int a[size]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The values in the arry are:"<<endl;
    some(a,0,size);
    cout<<endl;
    system("pause");
    return 0;
}
