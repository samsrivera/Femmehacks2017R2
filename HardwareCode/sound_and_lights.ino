#define BUTTON_PIN
#define LED 2 //connect LED to digital pin2
int buttonState = 0; 
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(3, INPUT);
   pinMode(2, OUTPUT);    
  
}

void loop()
{
buttonState = digitalRead(3);
 digitalWrite(2, HIGH);   // set the LED on
  delay(500);               // for 500ms
  digitalWrite(2, LOW);   // set the LED off
  delay(500);
digitalWrite(6, HIGH);
//delay(1000);
     while (buttonState == HIGH) 
        {
                //If the button is pressed, turn the buzzer on
                digitalWrite(6, LOW);
break;
        }        }
        
  //digitalWrite(6, LOW);
  //delay(1000);

