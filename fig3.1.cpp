#include <iostream>
using std::cout;
using std::endl;

class GradeBook
{
public:
       void displayMessage()
       {
            cout << "Wwlcome to the Grade Book!" << endl;
       }      
};
int main()
{
    GradeBook myGradeBook;
    myGradeBook.displayMessage();
    system("pause");
    return 0;
}
