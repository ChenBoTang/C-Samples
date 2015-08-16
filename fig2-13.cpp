#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
     int number1;
     int number2;
     double solution;
     cout <<"Enter two integers to compare:";
     cin >> number1 >> number2;
     if(number1 == number2)
     {
                cout << number1 << "==" << number2 << endl;
     }
     solution =number1 % number2;
     cout <<"Answer is" << solution << endl;
     system("pause");
     return 0;
}
