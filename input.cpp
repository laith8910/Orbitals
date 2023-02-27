#include <Servo.h> //includes library for a servo
using namespace std;

Servo input_s; //creates an object that is of class servo

void setup {

    input_s.attach(ENTER PIN HERE); //assigns servo to pin
    input_s.write(0); //sets servo to 0 degrees

}

void main {

    for (int i=0; i=1; i++) { //loops twice
        input_s.write(180); //sets servo to 180 degrees
        delay(1000); // waits 1 second
        input_s.write(0); // sets servo to 0 degrees
        delay(30000); //waits 30 seconds
    }

}