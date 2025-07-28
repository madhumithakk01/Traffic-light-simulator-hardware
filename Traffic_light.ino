#define LED_GREEN_1 12
#define LED_YELLOW_1 11
#define LED_RED_1 10

#define LED_GREEN_2 9
#define LED_YELLOW_2 8
#define LED_RED_2 7

#define LED_GREEN_3 6
#define LED_YELLOW_3 5
#define LED_RED_3 4

#define LED_GREEN_4 3
#define LED_YELLOW_4 2
#define LED_RED_4 0

bool tl1_red = true;
bool tl2_red = true;
bool tl3_red = true;
bool tl4_red = true;
bool all_red = true;


void setup()
{
  pinMode(LED_GREEN_1, OUTPUT);
  pinMode(LED_YELLOW_1, OUTPUT);
  pinMode(LED_RED_1, OUTPUT);
  
  pinMode(LED_GREEN_2, OUTPUT);
  pinMode(LED_YELLOW_2, OUTPUT);
  pinMode(LED_RED_2, OUTPUT);

   
  pinMode(LED_GREEN_3, OUTPUT);
  pinMode(LED_YELLOW_3, OUTPUT);
  pinMode(LED_RED_3, OUTPUT);

   
  pinMode(LED_GREEN_4, OUTPUT);
  pinMode(LED_YELLOW_4, OUTPUT);
  pinMode(LED_RED_4, OUTPUT);
}
void loop() {
  if(all_red){
    allRedOn();
  }
  
  trafficLight_1();  
  trafficLight_2();
  trafficLight_3();
  trafficLight_4();                  
}

//......Keep all red signals on...
void allRedOn(){
  digitalWrite(LED_RED_2, HIGH);
  digitalWrite(LED_RED_3, HIGH);
  digitalWrite(LED_RED_4, HIGH);
  all_red = false;
}

//.....................


//.....Code for Traffic Light 1......Begins.
void trafficLight_1(){
  trafficLight1_green();
  trafficLight1_yellow(); 
  trafficLight1_red();
}

void trafficLight1_green(){
  if(tl1_red){
     digitalWrite(LED_RED_1, LOW); 
  }
  digitalWrite(LED_GREEN_1, HIGH);
  delay(5000);
  digitalWrite(LED_GREEN_1, LOW);
  //delay(1000);
}

void trafficLight1_yellow(){
  digitalWrite(LED_YELLOW_1, HIGH);
  delay(1000);
  digitalWrite(LED_YELLOW_1, LOW);
  //delay(1000);
}

void trafficLight1_red(){
  digitalWrite(LED_RED_1, HIGH);
  delay(1000);
 // digitalWrite(LED_RED_1, LOW);
  //delay(1000);
}
//.....Code for Traffic Light 1......Ends.

//.....Code for Traffic Light 2......Begins.
void trafficLight_2(){
  if(tl2_red){
     digitalWrite(LED_RED_2, LOW); 
  }
  trafficLight2_green();
  trafficLight2_yellow(); 
  trafficLight2_red();
}

void trafficLight2_green(){
  digitalWrite(LED_GREEN_2, HIGH);
  delay(5000);
  digitalWrite(LED_GREEN_2, LOW);
  //delay(1000);
}

void trafficLight2_yellow(){
  digitalWrite(LED_YELLOW_2, HIGH);
  delay(1000);
  digitalWrite(LED_YELLOW_2, LOW);
  //delay(1000);
}

void trafficLight2_red(){
  digitalWrite(LED_RED_2, HIGH);
  delay(1000);
 // digitalWrite(LED_RED_2, LOW);
  //delay(1000);
}
//.....Code for Traffic Light 2......Ends.

//.....Code for Traffic Light 3......Begins.
void trafficLight_3(){
  if(tl3_red){
     digitalWrite(LED_RED_3, LOW); 
  }
  trafficLight3_green();
  trafficLight3_yellow(); 
  trafficLight3_red();
}

void trafficLight3_green(){
  digitalWrite(LED_GREEN_3, HIGH);
  delay(5000);
  digitalWrite(LED_GREEN_3, LOW);
  //delay(1000);
}

void trafficLight3_yellow(){
  digitalWrite(LED_YELLOW_3, HIGH);
  delay(1000);
  digitalWrite(LED_YELLOW_3, LOW);
  //delay(1000);
}

void trafficLight3_red(){
  digitalWrite(LED_RED_3, HIGH);
  delay(1000);
  //digitalWrite(LED_RED_3, LOW);
  //delay(1000);
}
//.....Code for Traffic Light 3......Ends.

//.....Code for Traffic Light 4......Begins.
void trafficLight_4(){
  trafficLight4_green();
  trafficLight4_yellow(); 
  trafficLight4_red();
}

void trafficLight4_green(){
  if(tl4_red){
     digitalWrite(LED_RED_4, LOW); 
  }
  digitalWrite(LED_GREEN_4, HIGH);
  delay(5000);
  digitalWrite(LED_GREEN_4, LOW);
  //delay(1000);
}

void trafficLight4_yellow(){
  digitalWrite(LED_YELLOW_4, HIGH);
  delay(1000);
  digitalWrite(LED_YELLOW_4, LOW);
  //delay(1000);
}

void trafficLight4_red(){
  digitalWrite(LED_RED_4, HIGH);
  delay(1000);
 // digitalWrite(LED_RED_4, LOW);
 // delay(1000);
}
//.....Code for Traffic Light 4......Ends.
