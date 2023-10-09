/*-------------------------------------------------------------------------*/
/* Tanmay Gupta                                                            */
/* mystring.cpp                                                            */
/* driver program for project 2                                            */
/*-------------------------------------------------------------------------*/

#include "mystring.h"
#include <iostream>
#include <cstring>
using namespace std;

int mystrlen(const char *s)
    // Returns length of string s
{
    const char *sLength = s;
        // This is done because s is could be used in other places,
            // but sLength is just used here.

    while (*sLength != '\0') // until null isn't the value.
    {
        sLength++; // Keeps adding 1 to sLength until it reaches null
    }

    return sLength - s; // Prints length of sLength minus s
}

int mystrcmp(const char *s1, const char *s2)
    // Compares the values of the 2 strings.
    // Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2
{
   while ((*s1 != '\0') && (*s1 == *s2))
   {
        ++s1;
        ++s2;
   }
   return *s1 - *s2;
}

char *mystrcpy(char *s1, const char *s2) // s1 = pcTo. s2 = pcFrom
    // Copies/replaces value of s2 into s1 entirely.
{
    char *sReturn = s1; // makes all of s1 equal a singular point in a location in sReturn

    while (*s2 != '\0') // *s1 = '\0'; lets you print the whole string. *s1[] == '\0'; is to show where the ending of a string is.
   // Since *s2 holds a specific value at a location within s2,
        // so while the value isn't null (end), the while loop will keep going.
   {
        *s1 = *s2; // this makes the existing s1 from another program equal s2.
        ++s2; // this makes s2 print until meeting the while loop criteria.
        ++s1;
    }

    *s1 = '\0'; // checks for the end of the array?
    return sReturn;
}

char *mystrcat(char *s1, const char *s2)
    // Concatenates/adds the values of s2 to the end of the s1.
{
    char *sReturn = s1;

    while (*s1 != '\0') // until NULL
    {
        ++s1; // write out s1 until NULL first
    }
    while (*s2 != '\0') // until NULL
    {
        *s1 = *s2; // writes one into the other.
        ++s1;
        ++s2;
    }

    *s1 = '\0'; // Adds the NULL

    return sReturn;
}

/*char *mystrrchr(const char *pc, int iChar)
// Copies/overlaps contents of iChar into pc.
{
    char *sReturn = '\0'; // I couldn't initialize sReturn as "const char" nor "int".

    while (*pc != '\0') // Goes until NULL
    {
        if (*pc == iChar) // checks for occurrances of iChar in pc.
        {
            *sReturn = *pc; // overlaps sReturn.
        }
        ++pc; // Writes "pc" fully until NULL.
    }

   return sReturn;
}*/

/*Sample run from Assign2Testmystring.cpp
____________________________________________________________________
If no any error outputs, your program passes all the tests. The End.
____________________________________________________________________
*/
