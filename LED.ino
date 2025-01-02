void setup() {
  for(int i=3;i<10;i++){
    pinMode(i,OUTPUT);
  }

}

void loop() {
  int myNumber;
  myNumber = LED_random(0,9);
  delay(500);
  swith_LED(myNumber);
  delay(500);
  claer_LED();
  delay(500);
}

void claer_LED(){
  for(int i=3;i<10;i++){
    digitalWrite(i,LOW);
  }
}

void swith_LED(int myNumber){
  switch (myNumber) {
      //显示零
    case 0:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 1:
    //显示一
      digitalWrite(4,HIGH);
      digitalWrite(7,HIGH);
      break;
    //显示二
    case 2:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(8,HIGH);
      break;
    //显示三
    case 3:
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;
    case 4:
    //显示四
      digitalWrite(6,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
      break;
    case 5:
    //显示五
      digitalWrite(3,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      break;
    case 6:
    //显示六
      digitalWrite(3,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 7:
      //显示七
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(7,HIGH);
      break;
    case 8:
      //显示八
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    case 9:
      //显示九
    default:
      digitalWrite(3,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(4,HIGH);
  }
}

int LED_random(int min,int max){
  int myNumber = random(min,max);
  return myNumber;
}

