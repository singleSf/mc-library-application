using namespace std;

#ifndef APPLICATION_INIT
#define APPLICATION_INIT true

#include "APPLICATION.h"

APPLICATION::APPLICATION() {}
APPLICATION::~APPLICATION() {}

void APPLICATION::exit(){
  while(true){
    yield();
  }
}

int APPLICATION::getFreeMemory() {
  extern int __heap_start, *__brkval;
  int v;
  return (int) &v - (__brkval == 0 ? (int) &__heap_start : (int) __brkval);
}


#endif