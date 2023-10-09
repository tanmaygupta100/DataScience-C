// project11driver.cpp
// Tanmay Gupta
// Analyze efficiency of different algorithms.

/******************************************************************************
 CMPSC122 Su Assignment: Project #11 -- sample driver
 ******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include "timer.h"
using namespace std;

// Algorithm #1, Blue Function
int Max_Subsequence_Sum_BLUE( const int A[], const unsigned int N )
{
	int This_Sum = 0, Max_Sum = 0; // 2
	
	for (int i=0; i<N; i++) // 2n
	{
		This_Sum = 0; // 1
		for (int j=i; j<N; j++) // 2n
		{
			This_Sum += A[j]; // 2n-2
			if (This_Sum > Max_Sum) // 1
			{
				Max_Sum = This_Sum; // 1
			}
		}
	}
	return Max_Sum; // 1
} // 6n+3



// Algorithm #2, Green Function
int Max_Subsequence_Sum_GREEN( const int A[], const unsigned int N )
{
  int This_Sum = 0, Max_Sum = 0; // 2

  for (int i=0; i<N; i++) // 2n
  {
    for (int j=i; j<N; j++) // 2n
    {
      This_Sum = 0; // 1
      for (int k=i; k<=j; k++) // 2n
      {
        This_Sum += A[k]; // 2n-2
      }
      if (This_Sum > Max_Sum) // 1
      {
        Max_Sum = This_Sum; // 1
      }
    }
  }
  return Max_Sum; // 1
} // Total: 8n+3



// Algorithm #3, Red Function
int Max_Subsequence_Sum_RED( const int A[], const unsigned int N )
{
  int This_Sum = 0, Max_Sum = 0; // 2

  for (int Seq_End=0; Seq_End<N; Seq_End++) // 2n
  {
    This_Sum += A[Seq_End]; // 2n-2

    if (This_Sum > Max_Sum) // 1
    {
      Max_Sum = This_Sum; // 1
    }
    else if (This_Sum < 0) // 1
    {
      This_Sum = 0; // 1
    }
  }
  return Max_Sum; // 1
} // Total: 4n+5



int main( )
{
	int Size = 64;
	int *Vec, Result_BLUE[6], Result_GREEN[6], Result_RED[6];
	char Answer;

	Timer T_BLUE[6];
	Timer T_GREEN[6];
	Timer T_RED[6];
	
	for ( int i = 0; i < 6; i++)
	{ 
		Vec = new int [Size];
		srand( time(0) );
		
		for (int I=0; I<Size; I++)
		{
			Vec[I] = rand() % 100 - 50;
		}
		
		cout << "Do you wish to view the array contents? (Y or N): ";
		cin >> Answer;
		
		if (Answer == 'Y' || Answer == 'y')
		{
			for (int J=0; J<Size; J++)
			{
				cout << Vec[J] << "\n";
			}
		}
		cout << endl;
		

		T_BLUE[i].start();
		Result_BLUE[i]  = Max_Subsequence_Sum_BLUE( Vec, Size );
		T_BLUE[i].stop();

		T_GREEN[i].start();
		Result_GREEN[i]  = Max_Subsequence_Sum_GREEN( Vec, Size );
		T_GREEN[i].stop();

		T_RED[i].start();
		Result_RED[i]  = Max_Subsequence_Sum_RED( Vec, Size );
		T_RED[i].stop();

		
		Size = 2* Size;
		
	}
	
	for ( int i = 0; i < 6; i++)
	{ 
		cout << "BLUE - Maximum contiguous subsequence sum: " << Result_BLUE [i] << "\n";
		T_BLUE[i].show();
		cout << endl;

		cout << "GREEN - Maximum contiguous subsequence sum: " << Result_GREEN [i] << "\n";
		T_GREEN[i].show();
		cout << endl;

		cout << "RED - Maximum contiguous subsequence sum: " << Result_RED [i] << "\n";
		T_RED[i].show();
		cout << endl;
	}
}

/*
SAMPLE OUTPUT:
___________________________________________________
Do you wish to view the array contents? (Y or N): Y
41
12
9
-16
31
46
45
18
-8
-37
12
29
1
36
30
45
-24
-23
-48
-24
-1
-45
33
-34
33
-28
-46
32
-6
-21
-17
-18
-2
-6
-12
10
-40
47
25
17
35
28
30
-12
34
47
-10
-36
23
-12
-33
-22
40
-45
-3
48
42
-12
25
-4
21
45
-38
20

Do you wish to view the array contents? (Y or N): N

Do you wish to view the array contents? (Y or N): N

Do you wish to view the array contents? (Y or N): N

Do you wish to view the array contents? (Y or N): N

Do you wish to view the array contents? (Y or N): N

BLUE - Maximum contiguous subsequence sum: 325
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


GREEN - Maximum contiguous subsequence sum: 325
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


RED - Maximum contiguous subsequence sum: 325
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


BLUE - Maximum contiguous subsequence sum: 198
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


GREEN - Maximum contiguous subsequence sum: 198
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


RED - Maximum contiguous subsequence sum: 198
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


BLUE - Maximum contiguous subsequence sum: 361
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


GREEN - Maximum contiguous subsequence sum: 361
  Process Timer
  -------------------------------
  User CPU Time  : 0.01 s
  System CPU Time: 0 s
  Wait Time      : 0 s
  -------------------------------
  Elapsed Time   : 0.01 s


RED - Maximum contiguous subsequence sum: 361
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


BLUE - Maximum contiguous subsequence sum: 698
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


GREEN - Maximum contiguous subsequence sum: 698
  Process Timer
  -------------------------------
  User CPU Time  : 0.05 s
  System CPU Time: 0 s
  Wait Time      : 0.01 s
  -------------------------------
  Elapsed Time   : 0.06 s


RED - Maximum contiguous subsequence sum: 698
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


BLUE - Maximum contiguous subsequence sum: 1686
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.01 s
  -------------------------------
  Elapsed Time   : 0.01 s


GREEN - Maximum contiguous subsequence sum: 1686
  Process Timer
  -------------------------------
  User CPU Time  : 0.21 s
  System CPU Time: 0 s
  Wait Time      : 0 s
  -------------------------------
  Elapsed Time   : 0.21 s


RED - Maximum contiguous subsequence sum: 1686
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s


BLUE - Maximum contiguous subsequence sum: 1411
  Process Timer
  -------------------------------
  User CPU Time  : 0.01 s
  System CPU Time: 0 s
  Wait Time      : 0 s
  -------------------------------
  Elapsed Time   : 0.01 s


GREEN - Maximum contiguous subsequence sum: 1411
  Process Timer
  -------------------------------
  User CPU Time  : 1.4 s
  System CPU Time: 0 s
  Wait Time      : 0 s
  -------------------------------
  Elapsed Time   : 1.4 s


RED - Maximum contiguous subsequence sum: 1411
  Process Timer
  -------------------------------
  User CPU Time  : 0 s
  System CPU Time: 0 s
  Wait Time      : 0.001 s
  -------------------------------
  Elapsed Time   : 0.001 s
___________________________________________________
*/
