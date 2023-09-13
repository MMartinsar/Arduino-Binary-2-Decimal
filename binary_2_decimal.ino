int pinIn[]={12,2,3,4};
int pinOut[]= {5,6,7,8,9,10,11};
bool pal1 = false;
bool pal2 = false;
bool pal3 = false;
bool pal4 = false;

void setup()
{
  for(int i = 0; i < 4; i++){
    pinMode(pinIn[i], INPUT);
  }
  for(int i = 0; i < 7; i++){
    pinMode(pinOut[i], OUTPUT);
  }
}

void loop()
{
  pal1 = digitalRead(4);
  pal2 = digitalRead(3);
  pal3 = digitalRead(2);
  pal4 = digitalRead(12);
  if((pal1 == false) && (pal2 == false) && (pal3 == false) && (pal4 == false)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
    if((pal1 == false) && (pal2 == false) && (pal3 == false) && (pal4 == true)){
  	digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
    if((pal1 == false) && (pal2 == false) && (pal3 == true) && (pal4 == false)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }
    if((pal1 == false) && (pal2 == false) && (pal3 == true) && (pal4 == true)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }
    if((pal1 == false) && (pal2 == true) && (pal3 == false) && (pal4 == false)){
  	digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
    if((pal1 == false) && (pal2 == true) && (pal3 == false) && (pal4 == true)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
    if((pal1 == false) && (pal2 == true) && (pal3 == true) && (pal4 == false)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
    if((pal1 == false) && (pal2 == true) && (pal3 == true) && (pal4 == true)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
    if((pal1 == true) && (pal2 == false) && (pal3 == false) && (pal4 == false)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
    if((pal1 == true) && (pal2 == false) && (pal3 == false) && (pal4 == true)){
  	digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
}