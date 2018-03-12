Explore digital input and program flow control using the button and switch

Follow the tutorial at: 
https://learn.sparkfun.com/tutorials/lilypad-protosnap-plus-activity-guide#6-buttons-and-switches

This code is released under the MIT License (http://opensource.org/licenses/MIT)

******************************************************************************/

// Create integer variables for the pins we'll be using

int buttonPin = A5;

int buzzer = 7;

// Map musical notes to their frequencies by creating variables for them.
// You can find the frequencies for higher and lower notes at:
// https://www.arduino.cc/en/Tutorial/toneMelody

int NOTE_C5 = 523;
int NOTE_CS5 = 554;
int NOTE_D5 = 587;
int NOTE_DS5 = 622;
int NOTE_E5 = 659;
int NOTE_F5 = 698;
int NOTE_FS5 = 740;
int NOTE_G5 = 784;
int NOTE_GS5 = 831;
int NOTE_A5 = 880;
int NOTE_AS5 = 932;
int NOTE_B5 = 988;
int NOTE_C6 = 1047;

// We'll also create a variable for how long to play each note in milliseconds.
// If you make this smaller, the notes will play faster.

int tempo = 500;

void setup()
{
  // Initialize the button and switch pins as inputs with pullups.
  // Pullups keep the inputs from "floating" when a switch or button is open / unpressed.

  pinMode(buttonPin, INPUT_PULLUP);


  // Initialize the buzzer as output:

  pinMode(buzzer, OUTPUT);

}

void loop()
{
  // This code will read the positions of the button and switch,
  // then use the "if" command to make LEDs follow these states.

  // Create variables to store the button and switch input values:

  int buttonState;


  // Read and save the states of the button:

  buttonState = digitalRead(buttonPin);


  // The if-else statement lets you do different things based on different inputs:

  // The button will read as LOW when it's pressed

  if (buttonState == LOW) // Check to see if buttonState is LOW (pressed) 
  {
  
  tone(buzzer,NOTE_C5);
  delay(tempo);

  tone(buzzer,NOTE_D5);
  delay(tempo);

  tone(buzzer,NOTE_E5);
  delay(tempo);

  tone(buzzer,NOTE_F5);
  delay(tempo);

  tone(buzzer,NOTE_G5);
  delay(tempo);

  tone(buzzer,NOTE_A5);
  delay(tempo);

  tone(buzzer,NOTE_B5);
  delay(tempo);

  tone(buzzer,NOTE_C6);
  delay(tempo);
  

  }
  else
  {
    noTone(buzzer); // If buttonState is HIGH (unpressed), no tone
  }


}

