
//Normal LED LIGH
int led2 = 2; 
int led3 = 3;

// RGB LED LIGHT
int redLED = 11;
int greenLED = 10;
int blueLED = 9;

int halfSec = 500;
int sec = 1000;
int go = 0;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  
  pinMode(led2,OUTPUT);
  pinMode(led3, OUTPUT); 
}

void loop() {
  roundONE();
  roundTWO();
  roundThree();

}

void roundONE(){
  while(go < 5){
    digitalWrite(led2, HIGH);
    delay(halfSec);
    rgb(0, 255, 0);
    delay(halfSec);
    digitalWrite(led3, HIGH);
    delay(halfSec);
    digitalWrite(led3, LOW);
    rgb(0, 0, 0);
    rgb(0, 0, 255);
    delay(halfSec);
    digitalWrite(led2, LOW);
    delay(halfSec);
    rgb(0, 255, 0);
    go++;
  }
    go = 0;
}

void roundTWO(){
  while(go < 50){
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    rgb(0, 0, 0);
    delay(100);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    rgb(0, 255, 0);
    delay(100);
    go++;
  }
  go = 0;
}

void roundThree(){
  while(go < 20){
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    rgb(0, 0, 0);
    delay(sec);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    rgb(0, 255, 0);
    delay(sec);
    digitalWrite(led2, HIGH);
    rgb(0, 0, 255);
    delay(sec);
    go++;
  }
  go = 0;
}

void rgb(int redVAL, int greenVAL, int blueVAL)
 {
  analogWrite(redLED, redVAL);
  analogWrite(greenLED, greenVAL);
  analogWrite(blueLED, blueVAL);
}
