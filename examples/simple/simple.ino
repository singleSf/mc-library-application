using namespace std;

#include <APPLICATION.h>

void setup() {
  Serial.begin(9600);

  Serial.println("START");
  APPLICATION::exit();
  Serial.println("END");
}

void loop() {

}