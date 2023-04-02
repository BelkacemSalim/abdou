#include "abdou.h"
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>
/*
    @@@@@@@                     | \ / |
    C|O†O|D                     | o|o |
     ( Õ )  <(gender: kabyle)   | ___ |	<(no side remarks)
*/

int main(void) {
  time_t start = time(NULL), now = time(NULL);
  while(now-start!=20){
    abdou_classic();
    sleep(1);
    printf("\n");
    now = time(NULL);
  }
}