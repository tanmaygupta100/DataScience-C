/*-------------------------------------------------------------------------*/
/* Tanmay Gupta                                                            */
/* mystring.h                                                              */
/* cmpsc122                                                                */
/* header file for assignment 2                                            */
/*-------------------------------------------------------------------------*/


int mystrlen(const char *s1);
    // Returns length of string s


int mystrcmp(const char *s1, const char *s2);
    // Compares the values of the 2 strings.
    // Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2


char *mystrcpy(char *s1, const char *s2);
    // Copies/replaces value of s2 into s1 entirely.


char *mystrcat(char *s1, const char *s2);
    // Concatenates/adds the values of s2 to the end of the s1.


char *mystrrchr(const char *pc, int iChar);
    // Copies/overlaps contents of iChar into pc.
