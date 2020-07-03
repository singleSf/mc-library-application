using namespace std;

#include <APPLICATION.h>

void setup() {
  Serial.begin(9600);

  Serial.print("FREE MEMORY BYTES: ");
  Serial.println(APPLICATION::getFreeMemory());

  Serial.println("START");
  APPLICATION::exit();
  Serial.println("DO NOT PRINT");
}

void loop() {

}