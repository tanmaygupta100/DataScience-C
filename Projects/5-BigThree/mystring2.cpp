//File: mystring1.h
// Implementation file for user-defined String class.

#include "mystring2.h"


String::String() // Calling the String/String() outside of the class
{
  contents[0] = '\0'; // Initializing values
  len = 0;
}

String::String(const char s[])
{
  len = strlen(s);
  contents = new char;
  strcpy(contents, s);
}



void String::append(const String &str)
{
  strcat(contents, str.contents);

  len += str.len;

}

// Deconstructor:
String::~String()
{
  delete [] contents;
}

// Copy Constructor:
String::String(const String & origString)
{
  len = origString.len; // Size
  contents = new char[len+1]; // Capacity
  for (int i=0; i<len; i++)
  {
    contents[i] = origString.contents[i];
  }
}

// Assignment Operator Overload
String String::operator =(const String &origString)
{
  if (this != & origString) // Check for string = string
  {
    len = origString.len;

      delete [] contents;
    contents = new char[len + 1];

    // Copy origString's array into this new array
    for (int i = 0; i < len; i++)
    {
      contents[i] = origString.contents[i];
    }
  }
  return *this;
}


bool String::operator >(const String &str) const
{
  return strcmp(contents, str.contents) > 0;
}

bool String::operator <(const String &str) const
{
  return strcmp(contents, str.contents) < 0;
}


String String::operator +=(const String &str)
{
	append(str);
	return *this;
}

void String::print(ostream &out) const
{
  out << contents;
}

int String::length() const
{
  return len;
}

char String::operator [](int i) const
{
  if (i < 0 || i >= len)
  {
    cerr << "can't access location " << i   // "cerr" is used to print error messages
         << " of string \"" << contents << "\"" << endl;
    return '\0';
  }
  return contents[i];
}

ostream & operator <<(ostream &out, const String & s) // overload ostream operator "<<" - External!
{
	s.print(out);
	return out;
}



/*
Sample Output:
_____________________________________________________________
Initial values:
str1 holds "" (length = 0)
str2 holds "dog" (length = 3)

Enter a value for str1 (no spaces): 15

Enter a value for str2 (no spaces): 14

After assignments...
str1 holds "15" (length = 2)
str2 holds "14" (length = 2)

Enter which element of str1 to display: 2
Element #2 of str1 is 'can't access location 2 of string "15"
'

Enter which element of str2 to display: 1
Element #1 of str2 is '4'

Enter a value to append to str1 (no spaces): 1

Enter a value to append to str2 (no spaces): 1

After appending...
str1 holds "151" (length = 3)
str2 holds "141" (length = 3)

Comparing str1 and str2...
"151" is greater than "141"

test the = operator, after str1 = str2; 
str1 holds "141" (length = 3)
str2 holds "141" (length = 3)

After str1 = str1 + s1: 
str1 holds "1411" (length = 4)
str2 holds "141" (length = 3)

test the copy constructor, after str3(str2);
str2 holds "141" (length = 3)
str3 holds "141" (length = 3)

after appending str2 by str1
str2 holds "1411411" (length = 7)
str3 holds "141" (length = 3)

str3 are not changed. Type any letter to quit.
f
_____________________________________________________________
*/
