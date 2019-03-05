
#include "stopwatch.h"
#include <stdio.h>
#include <ctime>
clock_t start, end =0;

void start_stopwatch(){
  start = clock();
  end = 0;
}
void stop_stopwatch(){
  end = clock();
}

float elapsed_time(){
  if(end == 0)
  {
    stop_stopwatch();
  }
  return float(end-start) / CLOCKS_PER_SEC * 1000;
  }
