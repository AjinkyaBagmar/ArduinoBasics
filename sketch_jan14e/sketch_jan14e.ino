int mypin=13;
int dit=100;
int dah=500;
int longwait=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(mypin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(mypin,HIGH);
delay(dit);
digitalWrite(mypin,LOW);
delay(dit);

digitalWrite(mypin,HIGH);
delay(dit);
digitalWrite(mypin,LOW);
delay(dit);

digitalWrite(mypin,HIGH);
delay(dit);
digitalWrite(mypin,LOW);
delay(dit);



digitalWrite(mypin,HIGH);
delay(dah);
digitalWrite(mypin,LOW);
delay(dah);

digitalWrite(mypin,HIGH);
delay(dah);
digitalWrite(mypin,LOW);
delay(dah);

digitalWrite(mypin,HIGH);
delay(dah);
digitalWrite(mypin,LOW);
delay(dah);


digitalWrite(mypin,HIGH);
delay(dit);
digitalWrite(mypin,LOW);
delay(dit);
digitalWrite(mypin,HIGH);
delay(dit);
digitalWrite(mypin,LOW);
delay(dit);

digitalWrite(mypin,HIGH);
delay(dit);
digitalWrite(mypin,LOW);
delay(dit);

delay(longwait);
}
