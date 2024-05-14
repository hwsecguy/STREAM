/* A gettimeofday routine to give access to the wall
   clock timer on most UNIX-like systems.  */

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

double mysecond() {
  struct timeval tp;
  gettimeofday(&tp, NULL);
  return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
}

void mysecond_des() { printf("Timer using gettimeofday (CLOCK_REALTIME)\n"); }
