/*
 * A times routine to give access to
 * the user and system CPU clock timer
 * on Linux systems.
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/times.h>
#include <time.h>

double mysecond() {
  struct tms tms;
  if (times(&tms) == (clock_t)-1) {
    printf("[!] times() returns -1, exiting!\n");
    exit(-1);
  }
  return ((double)(tms.tms_utime + tms.tms_cutime) / CLOCKS_PER_SEC);
}

void mysecond_des() { printf("Timer using user CPU time by times()\n"); }
