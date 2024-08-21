int b;

void setup() {

// put your setup code here, to run once: pinMode(8,INPUT); pinMode(9,OUTPUT); pinMode(7,OUTPUT); Serial.begin(9600);
}

void loop() {

//Put your main code here, to run repeatedly: digitalWrite(9,0);
delayMicroseconds(2); digitalWrite(9,1); delayMicroseconds(10); digitalWrite(9,0);
long dura=pulseIn(8,1); int dis=(dura/2)*0.0343; Serial.println(dis); if(dis<=10){
 
if(b==1){ digitalWrite(7,1); delay(1000); digitalWrite(7,0); b=0;
}

}

else{ digitalWrite(7,0); b=1;
}

delay(1000);

}
