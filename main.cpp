// FIG 3.3
// Define Class GradeBook with a member function displayMesssage,
//  create a GradeBook object, and call its displaMessage function
# include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
    public:
        // functon that displays a welcome message to the GradeBook user
        void displayMessage(string courseName) const
        {
            cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
        } //end function displayMesssage
}; // end class GradeBook

// function main begins program execuion
int main()
{
    string nameOfCourse; //String of characters to store he course name
    GradeBook myGradeBook; //Create gradebook object named myGradeBook

    // prompt for and input course name
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); //reads input for course name (including blank char)
    cout << endl;

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
}// end main
