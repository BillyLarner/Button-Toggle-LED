int buttonPin = 12 ;      // designates pin 12 to buttonPin
int ledPin = 9 ;          // designates pin 9 to ledPin
bool isLighting = false;  // defines a variable to store the state of the LED

void setup() {
  pinMode (buttonPin, INPUT) ; // sets pin 12 to an input
  pinMode (ledPin, OUTPUT) ;   // sets pin 9 to an output
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {        // checks the state of buttonPin
    delay (10);                               
    if (digitalRead(buttonPin) == LOW) {      // checks the state of buttonPin again
      reverseLED() ;                          // runs the reverseLED function
      while (digitalRead(buttonPin) == LOW) ; // waits for the button to be released
      delay (10);
      }
    }
  }

void reverseLED() {
  if (isLighting) {
    digitalWrite (ledPin, LOW);  // turns the LED off
    isLighting = false;          // stores the state of the LED
  }
  else {
    digitalWrite (ledPin, HIGH); // turns the LED on
    isLighting = true;           // stores the state of the LED
  }
}
