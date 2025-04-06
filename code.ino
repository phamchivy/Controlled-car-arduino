#define inA1 4 
#define inA2 5 
#define inB1 6
#define inB2 7 

byte bluetoothByte = 0; //khai báo biến nhận bluetooth
void setup() {
pinMode(inA1, OUTPUT);
pinMode(inA2, OUTPUT);
pinMode(inB1, OUTPUT);
pinMode(inB2, OUTPUT);
Serial.begin(9600); 
}
void loop() {
// Nếu nhận được giá trị
if (Serial.available() > 0) {
//đọc dữ liệu gửi về
bluetoothByte = Serial.read();
}
if (bluetoothByte == 1)
dithang();
else if (bluetoothByte == 0)
dunglai();
else if (bluetoothByte == 2)
lui();
else if(bluetoothByte == 3)
quaytrai();
else if (bluetoothByte == 4)
quayphai();
}
// Phần điều khiển động cơ, mình viết như thế này...MAX dễ hiểu luôn:
void dunglai(){          
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,LOW);
}
void dithang(){
           digitalWrite(inA1,HIGH);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,HIGH);
           digitalWrite(inB2,LOW);
   
}
void lui(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,HIGH);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,HIGH);
}
void quaytrai(){
           digitalWrite(inA1,HIGH);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,HIGH);
}
void quayphai(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,HIGH);
           digitalWrite(inB1,HIGH);
           digitalWrite(inB2,LOW);
}
