void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
pinMode (A0,INPUT);
pinMode (A1,INPUT);
pinMode (A2,INPUT);
pinMode (A3,INPUT); 
pinMode (A4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ex_right=analogRead (A0);
  int ex_left=analogRead (A1);
  Serial.print("\nRight: ");
  Serial.print(ex_right);
  Serial.print("\nLeft: ");
  Serial.print(ex_left);
  delay(200);
}
