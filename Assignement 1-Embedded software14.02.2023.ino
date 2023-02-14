int LEDState = 0;
int LEDPin = 27 ;
int buttonPin = 4 ;
int buttonNew;
int buttonOld = 0;
int dt = 100;
int a = 1300;
int b = 100;
int c = 12;
int d = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  SerialBegin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(buttonPin);
  if(buttonOld == 0 && buttonNew == 1)
  { 
    if(LEDState == 0)
    {
      for(int i=0; i<=12; i++)
      {
        digitalWrite(LEDPin, HIGH);
        delay(a);
        a = a + 50*i;
        digitalWrite(LEDPin, LOW);
        delay(b);
        LEDState = 1;

      }
      
    }
    else
    {
      digitalWrite(LEDPin,LOW);
      LEDState = 0;
      delay(100);
    }
  }    
  buttonOld=buttonNew;
  delay(dt);

}
