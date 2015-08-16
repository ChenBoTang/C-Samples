#include<iostream>
using std::cout;
using std::endl;
int what(int b[],int size)
{
    if(size==1)
               return b[0];
    else
               return b[size-1]+what(b,size-1);
}
int main()
{
    const int arraysize=10;
    int a[arraysize]={1,2,3,4,5,6,7,8,9,10};
    int result=what(a,arraysize);
    cout<<"Result is "<<result<<endl;
    system("pause");
    return 0;
}
