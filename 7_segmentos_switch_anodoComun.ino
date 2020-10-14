#define a 7
#define b 8
#define c 9
#define d 10
#define e 11
#define f 12
#define g 13

void display(unsigned char caracter)
{
     switch(caracter)
     {  case 0:
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);//HIGH
      break;
      case 1:
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);//LOW
      digitalWrite(c,LOW);//LOW
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
      case 2:
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH); //HIGH
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH); //HIGH
      digitalWrite(g,LOW);
      break;
      case 3:
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH); //HIGH
      digitalWrite(f,HIGH); //HIGH
      digitalWrite(g,LOW);
      break;
      case 4:
      digitalWrite(a,HIGH); //HIGH
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH); //HIGH
      digitalWrite(e,HIGH); //HIGH
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
      case 5:
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH); //HIGH
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH); //HIGH
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
       case 6:
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH); //HIGH
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
      case 7:
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
       case 8:
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
       case 9:
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);//HIGH
      digitalWrite(e,HIGH);//HIGH
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;
    }
}

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  display(0);
}

void loop()
{
    for(int i=0; i<=9; i++)
    {
      display(i);
      delay(1000);
  }

}
