/* RandomInt.h declares RandomInt, pseudo-random integer class.
 *
 * Written by: Joel C. Adams at Calvin College. Revised by M Su
 * Written for: C++: An Introduction To Computing 2e.
  ******************************************************************/

#ifndef RANDOMINT
#define RANDOMINT

#include <iostream>
#include <cstdlib>
#include <cassert>
#include <ctime>
using namespace std;

class RandomInt
{
 public:
  RandomInt();
  RandomInt(int low, int high);
  RandomInt(int seedValue);
  RandomInt(int seedValue, int low, int high);
  void Print(ostream & out) const;
  RandomInt Generate();
  RandomInt Generate(int low, int high);
  operator int();

 private:
  void Initialize(int low, int high);
  void SeededInitialize(int seedValue, int low, int high);
  int NextRandomInt();

  int        myLowerBound,
             myUpperBound,
             myRandomValue;

  static bool generatorInitialized;
};

inline RandomInt::RandomInt()
{
  Initialize(0, RAND_MAX);
}

inline RandomInt::RandomInt(int low, int high)
{
  assert(0 <= low);
  assert(low < high);
  Initialize(low, high);
}

inline RandomInt::RandomInt(int seedValue)
{
  assert(seedValue >= 0);
  SeededInitialize(seedValue, 0, RAND_MAX);
}

inline RandomInt::RandomInt(int seedValue, int low, int high)
{
  assert(seedValue >= 0);
  assert(0 <= low);
  assert(low < high);
  SeededInitialize(seedValue, low, high);
}

inline void RandomInt::Print(ostream & out) const
{
  out << myRandomValue;
}

inline ostream & operator<< (ostream & out, const RandomInt & randInt)
{
  randInt.Print(out);
  return out;
}

inline int RandomInt::NextRandomInt()
{
  return myLowerBound + (rand() % (myUpperBound - myLowerBound + 1));
  //  return myLowerBound + (rand() >> 1) % (myUpperBound - myLowerBound + 1);
}

inline RandomInt RandomInt::Generate()
{
  myRandomValue = NextRandomInt();
  return *this;
}

inline RandomInt::operator int()
{
  return myRandomValue;
}


bool RandomInt::generatorInitialized = false;

void RandomInt::Initialize(int low, int high)
{
  myLowerBound = low;
  myUpperBound = high;

  if (!generatorInitialized)       // call srand() first time only
    {
      srand(long(time(0)));        // use clock for seed
      generatorInitialized = true;
    }

  myRandomValue = NextRandomInt();
}


void RandomInt::SeededInitialize(int seedValue, int low, int high)
{
  myLowerBound = low;
  myUpperBound = high;
  srand(seedValue);
  generatorInitialized = true;
  myRandomValue = NextRandomInt();
}


RandomInt RandomInt::Generate(int low, int high)
{
  assert(0 <= low);
  assert(low < high);
  myLowerBound = low;
  myUpperBound = high;
  myRandomValue = NextRandomInt();
  return *this;
}


#endif
