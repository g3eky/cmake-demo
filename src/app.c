#include "app.h"
#include "lib1/lib1.h"
#include "lib2/lib2.h"

#include <stdio.h>


void app_hello() {
  printf("App hello\n");
  lib1_hello();
  lib2_hello();
}


