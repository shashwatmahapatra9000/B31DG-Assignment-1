int LEDState = 0; //Initial State of LED before waveform input
int LEDPin = 27 ; //Input for LED light displaying the waveform
int LEDPin2 = ; //Input for LED Light displaying the seconf waveform
int buttonPin = 4 ; //Input for Switch, press to reverse already running waveform
int buttonPin2 = 5  ; //Input for Switch, press to stop waveform
int buttonNew; //New condition for button, carries value to ascertain whether button 1 is pushed or not
int buttonOld = 0; //condition for button, carries value to ascertain whether button 1 is pushed or not
int dt = 100; 
int a = 1300; //
int re = 1850;
int b = 100;
int c = 12;
int d = 500;
buttonOldp = 0;
buttonNewp;


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalRead(buttonNewp);
 if(buttonNewp == 0)
 {
   buttonNew = digitalRead(buttonPin);
    if(buttonNew == 0)
    { 
      digitalWrite(LEDPin2 , High);
      delay(50);
      digitalWrite(LEDPin2 , LOW);
      delay(50);
      for(int i=0; i<12; i++)
      {
        digitalWrite(LEDPin, HIGH);
        delay(a);
        a = a + 50;
        digitalWrite(LEDPin, LOW);
        delay(b);


      }
      delay(d);
    }
   else
    {
      for(int i=0; i<12; i++)
      {
        digitalWrite(LEDPin,HIGH);
        delay(re);
        re = re - 50;
        digitalWrite(LEDPin, LOW);      
        delay(b);
  
        
      }
      delay(d);
          
      
      
    }
  }

  else
  {
    digitalWrite(LEDPin , LOW);
    delay(50);
    digitalWrite(LEDPin2 , LOW);
    delay(50);

  }
      
  


 }

  

