int potPin=1; 
int val=0;
void setup(){
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  val=analogRead(potPin); 
  int x=val; 
  for (int i=1; i<4; i++)
  {
  digitalWrite(i, HIGH);
   delay(x);
   digitalWrite(i, LOW);
   delay(x);}
   
for (int i=4; i>0; i--){
   digitalWrite(i, HIGH);
   delay(x);
   digitalWrite(i, LOW);
   delay(x);
  }
}
