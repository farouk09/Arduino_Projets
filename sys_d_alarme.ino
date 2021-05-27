
int cm1=4,cm2=7,ct1=A0,ct2=A1,alarme=9;
void setup() 
{
pinMode(cm1,INPUT);
pinMode(cm2,INPUT);
pinMode(alarme,OUTPUT);  
}

void loop() 
{  
if(digitalRead(cm1)==1 || digitalRead(cm2)==1 || analogRead(ct2)>=102 || analogRead(ct1)>=102 )
{
  tone(alarme,500,1000);   tone(9,900,1000);
}
}
