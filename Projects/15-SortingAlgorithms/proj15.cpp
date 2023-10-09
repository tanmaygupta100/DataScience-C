// Skeleton codes for proj15.cpp
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include "Timer.h"
#include "RandomInt.h"

using namespace std;

// Bubble Sort:
template<class T>
void BubbleSort(vector<T>& x)
{
    int n=x.size();
    for (int i=1; i < n; i++)
        for (int j=1; j <= n-i; j++)
      if (x[j-1] > x[j]) swap(x[j-1], x[j]);
    // Invariant: the i largest elements are in the correct locations.
}

// You need to add codes for the other sorting algorithms:

// Selection Sort:
template<class T>
void SelectionSort(vector<T>& x)
{
  int n = x.size();
  for (int i=1; i < n; i++)
  {
    int position = i;
    int mininumVal = x[i];
    for (int j=1+1; j<n; j++)
      if(x[j] < mininumVal)
        mininumVal = x[j];
        position = j;
    swap(x[position], x[i]);
  }
}

// Insert Sort:
template<class T>
void InsertionSort(vector<T>& x)
{
  int n = x.size();
  int temp, i, j;
  for (int i=1; i < n; i++)
  {
    temp = x[i];
    for (int j=1+1; j<n; j++)
      if(t<x[j])
        x[j+1] = x[j];
      else break;
    x[j+1] = temp;
  }
}

// Quick Sort:
template<class T>
void quickHelper(vector<T> &x, int first, int last)
{
  int i=first, j=last;
  if(first < last)
    int pi = split(x, first, last);
      quickHelper(x, first, pi-1);
      quickHelper(x, pi+1, last);
}
template<class T>
void QuickSort(vector<T>& x)
{
  quickHelper(x, 0, n-1);
}

// Merge Sort:



int main()
{
  double t[6];
 

  // Now print the result of the iterative version of the function
  Timer T[6] ;

 
  RandomInt r;
  vector<int> v[6];
  int numValues;

  
  cout << "Sorting array of random integers (0-100000)" << endl;
  cout << "Input the number of random values to be sorted: ";
  cin >> numValues;

  for (int i =1; i < numValues; ++i)
  {
      r.Generate(0, 100000);
      v[0].push_back(r);
  }

 v[5] = v[4] = v[3] = v[2] = v[1] = v[0];


// measure Bubble Sort:

  T[0].Start();
  BubbleSort(v[0]);
  T[0].Stop();
  t[0] = T[0].Seconds();
  cout <<"\nBubble sort takes "<<t[0]<<" seconds."<<endl;

// measure STL Sort:
  T[1].Start();
  sort(v[1].begin() +1, v[1].end());
  T[1].Stop();
  t[1] = T[1].Seconds();
  cout <<"\nSTL algorithm sort takes "<< t[1] <<" seconds."<<endl;


// measure Insertion Sort:
  T[2].Start();
  InsertionSort(v[2]);
  T[2].Stop();
  t[2] = T[2].Seconds();
  cout <<"\nInsertion sort takes "<<t[2]<<" seconds."<<endl;


// measure Selection Sort:
  T[3].Start();
  SelectionSort(v[3]);
  T[3].Stop();
  t[3] = T[3].Seconds();
  cout <<"\nSelection sort takes "<<t[3]<<" seconds."<<endl;

  
// measure Quick Sort:
  T[4].Start();
  QuickSort(v[4], 0, (v[4].size()-1));
  T[4].Stop();
  t[4] = T[4].Seconds();
  cout <<"\nQuick sort takes "<<t[4]<<" seconds."<<endl;

  
// measure Merge Sort:
  T[5].Start();
  MergeSort(v[5], 0, (v[5].size()-1));
  T[5].Stop();
  t[5] = T[5].Seconds();
  cout <<"\nMerge sort takes "<<t[5]<<" seconds."<<endl;


// rank and print the six sorting algorithms based on the times from the shortest to longest:

  
  return 0;
}


/*
Post your sample run:

*/
