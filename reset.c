#include "reset.h"
#include "alpha.h"

Uint MAX_COUNT;

void setMaxCount() {
  /*MAX_COUNT = 300;*/
  /*MAX_COUNT = ceil(510/log((alphasize <= 91 ? 2 : alphasize - 90)));*/
  MAX_COUNT = 20000;
}
