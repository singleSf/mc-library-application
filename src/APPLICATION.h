using namespace std;

#ifndef APPLICATION_INIT_H
#define APPLICATION_INIT_H true

#include <Arduino.h>

class APPLICATION {
  public:
    APPLICATION();
    ~APPLICATION();

    static void exit();
    static int getFreeMemory();
};

#endif