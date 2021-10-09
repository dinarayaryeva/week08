#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/resource.h>


int main(void) {

  struct rusage usage;

  for (int i=0; i<10; i++){
    void *p = malloc(10000000); 
    memset(p, 0, 10000000);  
    getrusage (RUSAGE_SELF, &usage);
    printf("Maximum resident set size of a process: %li \n", usage.ru_maxrss);
    sleep(1);
  }

  return 0;
}