#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void) {
  printf(1, "The system call read() has been used this many times %d\n", getreadcount());
  exit();
}

