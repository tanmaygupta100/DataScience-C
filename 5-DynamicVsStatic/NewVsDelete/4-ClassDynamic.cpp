#include <iostream>
using namespace std;

class Student
{
  private:
    int age;

  public:

    // constructor initializes age to 12
    Student() : age(12) {}
        // Here we have initialized age to 12 in the default constructor Student(),
            // and print its value with the function getAge().

    void getAge()
    {
      cout << "Age = " << age << endl;
    }
};

int main()
{
  // dynamically declare Student object
  Student* ptr = new Student();

  // call getAge() function
  ptr->getAge();

  // ptr memory is released
  delete ptr;

  return 0;
}

/*
Sample Output:
______________
Age = 12
______________
*/
