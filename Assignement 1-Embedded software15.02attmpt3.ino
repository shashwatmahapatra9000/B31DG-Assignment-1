int LEDState = 0; //Initial State of LED before waveform input
int LEDPin = 27 ; //Input for LED light displaying the waveform
int LEDPin2 = 19 ; //Input for LED Light displaying the seconf waveform
int buttonPin = 4 ; //Input for Switch, press to reverse already running waveform
int buttonPin2 = 5  ; //Input for Switch, press to stop waveform
int buttonNew; //New condition for button, carries value to ascertain whether button 1 is pushed or not
int buttonOld = 0; //condition for button, carries value to ascertain whether button 1 is pushed or not
int dt = 100; 
int a = 1300; //length of signal wave with HIGH Output
int re = 1850;//length of the signal wave when we have to showcase the wave in reverse and instead of adding 5o to each iteration, it will subtract 50 in each iteration
int b = 100; //delay between two high outputs, is always constant
int c = 12; //length of entire wave block, defines the number of times we need to increment value of a by 50
int d = 500; //delay between two wave blocks
int buttonOldp = 0; //The input from this switch results to output in second LED i.e. LEDPin2 Starting position of the button
int buttonNewp; //Position of button after pushing buttonPin2. 


void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  pinMode(LEDPin2, OUTPUT);

  pinMode(buttonPin, INPUT);
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
      digitalWrite(LEDPin2 , HIGH);
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

  

