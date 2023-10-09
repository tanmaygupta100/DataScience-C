// timer.h for CMPSC122 lab 7  Uinx MacOS system
// Define a Timer object t, use t.start() for beginning of the algorithm, t.stop() for the ending, and t.show() for printing.



#ifndef TIMER_H
#define TIMER_H

#include <ctime>
#include <string>
#include <iostream>
#include <sys/times.h>
#include <unistd.h>


class Timer
{
  public:
    // ------------------------------------------------------------------------
    Timer();

    // ------------------------------------------------------------------------
    Timer(const std::string &label);

    // ------------------------------------------------------------------------
    ~Timer();

    // ------------------------------------------------------------------------
    void start(void);

    // ------------------------------------------------------------------------
    void stop(void);

    // ------------------------------------------------------------------------
    void show(void);
 
  private:

    // ------------------------------------------------------------------------
    void reset(void);

    std::string
      label;

    long 
      tps;

    long
        start_time,
        end_time;

    double 
      usertime,
      systemtime,
      elapsedtime,
      waittime;

      struct tms 
        start_cpu_time,
        end_cpu_time;
};
#endif
// eof timer.h
// timer.cpp


Timer::Timer ()
{
  label = "Process Timer";
  reset();
}

Timer::Timer (const std::string &label)
{
  Timer::label = label;
  reset();
}

Timer::~Timer()
{
}

void
Timer::reset(void)
{
  tps = sysconf ( _SC_CLK_TCK );

  end_time = 0;
  usertime = 0;
  systemtime = 0;
  elapsedtime = 0;
  waittime = 0;
}

void
Timer::start(void)
{
  #ifdef WIN32
    start_time = clock();
  #else
    start_time = times(&(start_cpu_time));
  #endif
}

void
Timer::show(void)
{
      std::cout
      << "  "
      << label << "\n"
      << "  -------------------------------\n"
      << "  User CPU Time  : "
      << usertime << " s\n"
      << "  System CPU Time: "
      << systemtime << " s\n"
      << "  Wait Time      : "
      << waittime << " s\n"
      << "  -------------------------------\n"
      << "  Elapsed Time   : "
      << elapsedtime << " s\n" << std::endl;
}

void
Timer::stop(void)
{

  end_time = times(&end_cpu_time);

  elapsedtime = ((double)(end_time -
                start_time )/(double)tps );
  if (elapsedtime < 0.001)
  {
    elapsedtime = 0.001;
  }

    usertime = ((double)(end_cpu_time.tms_utime -
               start_cpu_time.tms_utime)/(double)tps);
    systemtime = ((double)(end_cpu_time.tms_stime -
                 start_cpu_time.tms_stime)/(double)tps);
    waittime = (elapsedtime - (usertime + systemtime));

  if ( waittime < 0.00 )
  {
    waittime = 0.00;
  }
}

// eof timer.cpp
