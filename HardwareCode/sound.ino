#define BUTTON_PIN

int buttonState = 0; 
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(3, INPUT);
  
  
}

void loop()
{
buttonState = digitalRead(3);
digitalWrite(6, HIGH);
//delay(1000);
     if (buttonState == HIGH) 
        {
                //If the button is pressed, turn the buzzer on
                digitalWrite(6, LOW);
        }
  //digitalWrite(6, LOW);
  //delay(1000);


     
}
