// Digital I/O
// input is a button, output is an LED
// declare variables, anything global
int btnpin= 2;
int ledpin= 8;

void setup() {
  // put your setup code here, to run once:
// declare inputs and outputs
pinMode (btnpin, INPUT);
pinMode (ledpin, OUTPUT);

//initialize serial comm- for debugging/ printing values
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// check if button is pressed
//inputs =read, outputs = write (in arduino)

//print for debugginh, to see button value
Serial.println (digitalRead (btnpin));

//if btn= 1, true light on, if btn=0, turn light off
if(digitalRead(btnpin)== 1){
  digitalWrite(ledpin, HIGH);
}
else{
  digitalWrite (ledpin, LOW);
  
  }
}
