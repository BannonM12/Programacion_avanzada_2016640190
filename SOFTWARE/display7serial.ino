const int a=13;
const int b=12;
const int c=11;
const int d=10;
const int e=9;
const int f=8;
const int g=7;
int inByte = 0;
 
void setup(){
    Serial.begin(9600); //Open the serial port
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
 
void loop(){
 
    if(Serial.available() > 0){
 
        inByte = Serial.read();
        Serial.println(inByte);
        delay(500);
        if(inByte == '0')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, HIGH);
          digitalWrite(e, HIGH);
          digitalWrite(f, HIGH);
          digitalWrite(g, LOW);
        }
        else if(inByte=='1')
        {
          Serial.println('1');
          digitalWrite(a, LOW);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, LOW);
          digitalWrite(e, LOW);
          digitalWrite(f, LOW);
          digitalWrite(g, LOW);
        }
        else if(inByte=='2')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, LOW);
          digitalWrite(d, HIGH);
          digitalWrite(e, HIGH);
          digitalWrite(f, LOW);
          digitalWrite(g, HIGH);
        }
        else if(inByte=='3')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, HIGH);
          digitalWrite(e, LOW);
          digitalWrite(f, LOW);
          digitalWrite(g, HIGH);
        }
            else if(inByte=='4')
        {
          Serial.println('1');
          digitalWrite(a, LOW);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, LOW);
          digitalWrite(e, LOW);
          digitalWrite(f, HIGH);
          digitalWrite(g, HIGH);
        }
        else if(inByte=='5')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, LOW);
          digitalWrite(c, HIGH);
          digitalWrite(d, HIGH);
          digitalWrite(e, LOW);
          digitalWrite(f, HIGH);
          digitalWrite(g, HIGH);
        }
        else if(inByte=='6')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, LOW);
          digitalWrite(c, HIGH);
          digitalWrite(d, HIGH);
          digitalWrite(e, HIGH);
          digitalWrite(f, HIGH);
          digitalWrite(g, HIGH);
        }
            else if(inByte=='7')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, LOW);
          digitalWrite(e, LOW);
          digitalWrite(f, LOW);
          digitalWrite(g, LOW);
        }
        else if(inByte=='8')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, HIGH);
          digitalWrite(e, HIGH);
          digitalWrite(f, HIGH);
          digitalWrite(g, HIGH);
        }
        else if(inByte=='9')
        {
          Serial.println('1');
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, LOW);
          digitalWrite(e, LOW);
          digitalWrite(f, HIGH);
          digitalWrite(g, HIGH);
        }
        else
        {
          Serial.println("2");
          digitalWrite(a, LOW);
          digitalWrite(b, LOW);
          digitalWrite(c, LOW);
          digitalWrite(d, LOW);
          digitalWrite(e, LOW);
          digitalWrite(f, LOW);
          digitalWrite(g, LOW);
        }
        
    }
}
