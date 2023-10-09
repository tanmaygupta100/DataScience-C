// Use new and delete to dynamically allocate data

#include <iostream>
using namespace std;

int main()
{
  // declare an int pointer
  int* pointInt;
  // declare a float pointer
  float* pointFloat;

  // dynamically allocate memory
  pointInt = new int;
  pointFloat = new float;

  // assigning value to the memory
  *pointInt = 45;
  *pointFloat = 45.45f; // Not sure what the "f" does.

  cout << *pointInt << endl;
  cout << *pointFloat << endl;

  // deallocate the memory
  delete pointInt;
  delete pointFloat;

  return 0;
}

/*
Sample Output:
______________
45
45.45
______________
*/
