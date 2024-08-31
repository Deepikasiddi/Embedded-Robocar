const int pin1 = 4, pin2 = 5, pin3 = 6, pin4 = 7;
const int switchpin1 = 0,switchpin2 = 1,switchpin3 = 2,switchpin4 = 3;
int switchstate1 = 0,switchstate2 = 0,switchstate3 = 0,switchstate4 = 0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1 , OUTPUT);
  pinMode(pin2 , OUTPUT);
  pinMode(pin3 , OUTPUT);
  pinMode(pin4 , OUTPUT);
  pinMode(switchpin1 , INPUT);
  pinMode(switchpin2 , INPUT);
  pinMode(switchpin3 , INPUT);
  pinMode(switchpin4 , INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchstate1 = digitalRead(switchpin1);
  switchstate2 = digitalRead(switchpin2);
  switchstate3= digitalRead(switchpin3);
  switchstate4 = digitalRead(switchpin4);
  //Forward
  if (switchstate1 == HIGH)
  {
    Serial.println('Forward');
    digitalWrite(pin1 , HIGH);
    digitalWrite(pin2 , LOW);
    digitalWrite(pin3 , HIGH);
    digitalWrite(pin4 , LOW);
  }
  if (switchstate2 == HIGH)
  {
    Serial.println('Reverse');
    digitalWrite(pin1 , LOW);
    digitalWrite(pin2 , HIGH);
    digitalWrite(pin3 , LOW);
    digitalWrite(pin4 , HIGH);
  }
  if (switchstate3== HIGH)
  {
    Serial.println('Right');
    digitalWrite(pin1 , HIGH);
    digitalWrite(pin2 , LOW);
    digitalWrite(pin3 , LOW);
    digitalWrite(pin4 , LOW);
  }
  if (switchstate4 == HIGH)
  {
    Serial.println('Left');
    digitalWrite(pin1 , LOW);
    digitalWrite(pin2 , LOW);
    digitalWrite(pin3 , HIGH);
    digitalWrite(pin4 , LOW);
  }
  else
  {
    Serial.println('Stop');
    digitalWrite(pin1 , LOW);
    digitalWrite(pin2 , LOW);
    digitalWrite(pin3 , LOW);
    digitalWrite(pin4 , LOW);
    
  }
}
