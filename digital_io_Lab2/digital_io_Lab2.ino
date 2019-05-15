
// Digital I/O
// input is a button, output is an LED
// declare variables, anything global
int btnpin= 8;
int led1pin= 12;
int sldsw= 2;
int led2pin= 4;

void setup() {
  // put your setup code here, to run once:
// declare inputs and outputs
pinMode (btnpin, INPUT);
pinMode (led1pin, OUTPUT);
pinMode (sldsw, INPUT);
pinMode (led2pin, OUTPUT);

}

void loop() {
//check if button is pressed
if (digitalRead (btnpin)==1){
  digitalWrite (led1pin,HIGH);
}
else {digitalWrite (led1pin, LOW);
  }

  //check if switch is closed, if closed slow blink LED
 while (digitalRead (sldsw)== HIGH) {
  delay(500);
  digitalWrite (led2pin,HIGH);
  delay(500);
  digitalWrite (led2pin,LOW);
  }
}  
