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
        void setCourseName(string name)
        {
             courseName=name;
        }
        string getCourseName()
        {
               return courseName;
        }
        void displayMessage()
        {
        cout <<"Welcome to the grade book for\n"<< getCourseName()<<"!"<<endl;
        } 
 private:
         string courseName;    
};

int main()
{
    string name;
    GradeBook myGradeBook;
     cout<<"Initial course name is: "<<endl;
    cout<<"\n Please enter the course name:"<<endl;
    getline(cin,name);
   
    myGradeBook.setCourseName(name);
    cout<<endl;
    myGradeBook.displayMessage();
    cout<<"Initial course name is: "<<myGradeBook.getCourseName()<<endl;
    system("pause");
    return 0;
}
