int int1 = 8;
int int2 =7;
int ENA = 2;
int lecturasensor;

void setup() {
  pinMode (int1,OUTPUT);
  pinMode (int2, OUTPUT); 
}


void loop() {


  lecturasensor = analogRead(A0);
  Serial.println(lecturasensor);
  delay(2000);


  if(lecturasensor < 40){
      digitalWrite (int1, HIGH);
  digitalWrite (int2, LOW);
  delay(1200); 
  }

  else(lecturasensor > 40); {
  digitalWrite (int1, LOW);
  digitalWrite(int2, HIGH);
  delay(1400); 
  
  }

  // Subir
  digitalWrite (int1, HIGH);
  digitalWrite (int2, LOW);
  delay(1200);
  
  digitalWrite (int1, LOW);
  digitalWrite (int2, LOW);
  delay(5000); 

  digitalWrite (int1, LOW);
  digitalWrite(int2, HIGH);
  delay(1400);

  digitalWrite (int1, LOW);
  digitalWrite (int2, LOW);
  delay(5000);
  
  
 }
