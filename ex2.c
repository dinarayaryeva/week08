#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int main(void) {

  for (int i=0; i<10; i++){
    void *p = malloc(10000000); 
    memset(p, 0, 10000000); //Since we somehow use this memory, system allocates it. If I will use just calloc() no memory will be allocated. 
    sleep(2); //I changed the sleep time due to the slow work of top printing
  }

  return 0;
}