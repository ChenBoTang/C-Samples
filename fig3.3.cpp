#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;

class GradeBook
{
 public:
        void displayMessage(string courseName)
        {
             cout <<"Welcome to the grade book for\n"<< courseName<<"!"<<endl;
        
        }     
};

int main()
{
    string name;
    GradeBook myGradeBook;
    cout<<"Please enter the course name:"<<endl;
    getline(cin,name);
    cout<<endl;
    myGradeBook.displayMessage(name);
    system("pause");
    return 0;
}
