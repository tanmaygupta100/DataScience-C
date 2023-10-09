// Dynamically allocate arrays using new and delete.

// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
using namespace std;

int main()
{

  int num; // int is used to only get a whole number
  cout << "Enter total number of students: ";
  cin >> num;
  float* ptr; // float is used to get a decimal number, like 1.2
    
  // memory allocation of num number of floats
  ptr = new float[num]; // This creates space on how much we need.

  cout << "Enter GPA of students." << endl;
  for (int i = 0; i < num; ++i)
  {
    cout << "Student" << i + 1 << ": ";
    cin >> *(ptr + i);
  }

  cout << "\nDisplaying GPA of students." << endl;
  for (int i = 0; i < num; ++i)
  {
    cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
  }

  // ptr memory is released
  delete[] ptr; // the ([]) ensures that the entire array is deallocated.

  return 0;
}

/*
Sample Output:
_________________________________
Enter total number of students: 2
Enter GPA of students.
Student1: 3.7
Student2: 2

Displaying GPA of students.
Student1: 3.7
Student2: 2
_________________________________
*/
