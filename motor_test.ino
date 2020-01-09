int Left_p=11;
  int Left_n=10;
  int Right_p=13;
  int Right_n=12;

void setup() {
 pinMode (Left_p,OUTPUT);
  pinMode (Left_n,OUTPUT);
  pinMode (Right_p,OUTPUT);
  pinMode (Right_n,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (Left_p,HIGH);
      digitalWrite (Left_n,LOW);
      digitalWrite (Right_p,HIGH);
      digitalWrite (Right_n,LOW);
}
