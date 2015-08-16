#include <iostream>
#include<string.h>
using std::string;
using std::cout;
using std::endl;
#include"GradeBook.h"
/*class GradeBook
{
     public:
     GradeBook(string name)
     {
                      setCourseName(name);
     }
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
          cout<<"Welcome to the grade book\n"<<getCourseName()<<"!"<<endl;
     
     }       
     private:
             string courseName;
};

*/
int main()
{
    GradeBook gradeBook1("CS101");
    GradeBook gradeBook2("CS102");
    cout <<"gradeBook1 is:"<<gradeBook1.getCourseName()<<
    "\n gradeBook2 is:"<<gradeBook2.getCourseName()<<endl;
    system("pause"); 
    return 0;  
}
