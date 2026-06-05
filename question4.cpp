using std::
void setup()
{
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int rawValue = analogRead(A0);
  //translate it to volatage: * source(5) / (0 to 1023)
  float volt = rawValue * (5.0 / 1023.0);
  float temp = (volt - 0.5) * 100;
  Serial.println(temp);
 
  if (temp > 28) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
    
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
   	digitalWrite(2, LOW); 
  }
}
