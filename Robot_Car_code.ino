int Left_p=11;
int Left_n=10;
int Right_p=13;
int Right_n=12;
int threshold=300;
int ultra_threshold=450;
int rightcorner=210; 
//int Sensor=9;

void setup() 
{
  Serial.begin(9600);
  pinMode (Left_p,OUTPUT); 
  pinMode (Left_n,OUTPUT);
  pinMode (Right_p,OUTPUT);
  pinMode (Right_n,OUTPUT);
  //pinMode (Sensor;OUTPUT);

  pinMode (A0,INPUT);
  pinMode (A1,INPUT);
  pinMode (A2,INPUT);
  pinMode (A3,INPUT);
  pinMode (A4,INPUT);
  //pinMode (A5,INPUT);
}


void loop() 
{
  int ex_right=analogRead (A0);
  int ex_left=analogRead (A1);
  int ultra=analogRead (A2);

  Serial.println(ultra);
  if (ultra > ultra_threshold) {
      digitalWrite (Left_p,LOW);
      digitalWrite (Left_n,LOW);
      digitalWrite (Right_p,LOW);
      digitalWrite (Right_n,LOW);
      Serial.println("STOP");
  } else {
    // straight
    if (ex_left>threshold && ex_right>threshold)
    {
        digitalWrite (Left_p,HIGH);
        digitalWrite (Left_n,LOW);
        digitalWrite (Right_p,HIGH);
        digitalWrite (Right_n,LOW);
        Serial.println("straight");
        
    }
  
    // right
    if(ex_left>threshold && ex_right<threshold)
    {
        digitalWrite (Left_p,HIGH);
        digitalWrite (Left_n,LOW);
        digitalWrite (Right_p,LOW);
        digitalWrite (Right_n,LOW);
        Serial.println("right");
    }
  
    // left
    if(ex_left<threshold && ex_right>threshold)
    {
        digitalWrite (Left_p,LOW);
        digitalWrite (Left_n,LOW);
        digitalWrite (Right_p,HIGH);
        digitalWrite (Right_n,LOW);
        Serial.println("left");
    }
  
    // fuck
    if(ex_left<threshold && ex_right<threshold)
    {
        digitalWrite (Left_p,LOW);
        digitalWrite (Left_n,LOW);
        digitalWrite (Right_p,HIGH);
        digitalWrite (Right_n,LOW);
        Serial.println("fuck");
    }
  }
 }
