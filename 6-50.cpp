#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int mystery(int a,int b)
{
    if(b==1)
            return a;
    else
        return a+mystery(a,b-1); 
} 
int main()
{
    int x,y;
    cout<<"Enter two int:"<<endl;
    cin>>x>>y;
    cout<<"The result is"<<mystery(x,y)<<endl;
    system("pause");
    return 0;
}
