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

#endif