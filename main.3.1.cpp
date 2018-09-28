// FIG 3.1
// Define Class GradeBook with a member function displayMesssage,
//  create a GradeBook object, and call its displaMessage function
# include <iostream>
using namespace std;

// GradeBook class definition
class GradeBook
{
    public:
        // functon that displays a welcome message to the GradeBook user
        void displayMessage() const
        {
            cout << "Welcome to the Grade Boook!" << endl;
        } //end function displayMesssage
}; // end class GradeBook

// function main begins program execuion
int main()
{
    GradeBook myGradeBook; //Create gradebook object named myGradeBook
    myGradeBook.displayMessage(); // call object's displayMessage function
}// end main
