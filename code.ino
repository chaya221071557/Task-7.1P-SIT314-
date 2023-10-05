const int ledPin1 = 9;              
const int ldrPin1 = A0;              
const int ledPin2 = 8;              
const int ldrPin2 = A1;              
int lightThreshold1 = 100;           
int lightThreshold2 = 100;           

void setup() {
  pinMode(ledPin1, OUTPUT);          
  pinMode(ldrPin1, INPUT);           
  pinMode(ledPin2, OUTPUT);          
  pinMode(ldrPin2, INPUT);           
  Serial.begin(9600);                
}

void loop() {
  int ldrValue1 = analogRead(ldrPin1);   
  Serial.print("Photoresistor1 Value: ");          
  Serial.println(ldrValue1);             
  
  int ldrValue2 = analogRead(ldrPin2);   
  Serial.print("Photoresistor2 Value: ");          
  Serial.println(ldrValue2);             

  
  if (ldrValue1 < lightThreshold1) {
    digitalWrite(ledPin1, HIGH);        
  } else {
    digitalWrite(ledPin1, LOW);         
  }
  
  
  if (ldrValue2 < lightThreshold2) {
    digitalWrite(ledPin2, HIGH);        
  } else {
    digitalWrite(ledPin2, LOW);         
  }

  delay(100);                          
}
