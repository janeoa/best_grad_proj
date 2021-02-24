//pin declaration
const byte c1 = 2;  /**/ //encoder/ 
const byte c2 = 3;  /**/ //-------/


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(c1, INPUT);
  pinMode(c2, INPUT);

  Serial.println("c1\tc2");
}

void loop() {
  // put your main code here, to run repeatedly:
  bool b1 = digitalRead(c1);
  bool b2 = digitalRead(c2);
  
  Serial.print(b1);
  Serial.print("\t");
  Serial.println(b2);
  
}
