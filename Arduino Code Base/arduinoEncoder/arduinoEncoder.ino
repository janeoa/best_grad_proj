//pin declaration
const byte c1 = 2;  /**/ //encoder/ 
const byte c2 = 3;  /**/ //-------/
const byte s1 = 9;

bool isForward = true;
float angvel = 0;

long delta = 0;
long lastMessageMillis = 0;

long lastTrig = 0;
bool triggered = false;

long tisks = 0;

void setup() {
  delta = micros();
  lastMessageMillis = micros();
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(c1, INPUT);
  pinMode(c2, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(s1, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(c1), trigg, RISING);
  Serial.println("micros\ttikcs");

  
}

bool epta=true;
bool sync = false;

void loop() {
  // put your main code here, to run repeatedly:
  
  
  //analogWrite(5,analogRead(A0)/4);
//  if ( millis() - lastMessageMillis > 2000){
//    lastMessageMillis = millis();
//    digitalWrite(5, epta);
//    digitalWrite(6, !epta);
//    epta = !epta;
//  }
//    Serial.print(micros());
//    Serial.print("Direction: ");
    if(sync){
      Serial.print(micros());
      Serial.print("\t");
      Serial.println(tisks);
    }else{
      sync=digitalRead(s1);
      
    }
//    Serial.print("\t");
//    Serial.print(isForward);
//    Serial.print("\t");
//    Serial.print("Speed: ");
//    Serial.println(delta);
//    Serial.println("ms/tick");
  //}

  //epts
}

void trigg(){
  
//  delta = micros()-lastTrig;
//  lastTrig = micros();
  
  isForward= digitalRead(c2);
  if(isForward){
    tisks++;  
  }else{
    tisks--;  
  }
  triggered= true;
}
