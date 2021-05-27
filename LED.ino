int j ;

void setup() {

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);

}

void loop() {
for(int j = 2 ; j <4 ; j++ ){
  digitalWrite(j , HIGH) ;
  delay(100);
  digitalWrite(j,LOW) ;
  delay(100) ;

}

}
