int value;
void setup()
{
  Serial.begin(9600);
  for (int i=2;i<=8;i++) pinMode(i, OUTPUT);
  pinMode(9,INPUT);
}

void loop()
{
 yukarisay();
 
}

void yukarisay()
{
  sifir();delay(500);
  bir();delay(500);
  iki();delay(500);
  uc();delay(500);
  dort();delay(500);
  bes();delay(500);
  alti();delay(500);
  yedi();delay(500);
  sekiz();delay(500);
  dokuz();delay(500);
}
// void asagisay(){
//dokuz(); delay(1000);
//sekiz(); delay(1000);
//yedi(); delay(1000);
//alti(); delay(1000);
//bes(); delay(1000);
//dort(); delay(1000);
//uc(); delay(1000);
//iki(); delay(1000);
//bir(); delay(1000);
//sifir(); delay(1000);}

 
void sifir()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,1); //D
  digitalWrite(6,1); //E
  digitalWrite(7,1); //F
  digitalWrite(8,0); //G
  }
void bir()
  {
  digitalWrite(2,0); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,0); //D
  digitalWrite(6,0); //E
  digitalWrite(7,0); //F
  digitalWrite(8,0); //G
  }
void iki()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,0); //C
  digitalWrite(5,1); //D
  digitalWrite(6,1); //E
  digitalWrite(7,0); //F
  digitalWrite(8,1); //G
  }
void uc()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,1); //D
  digitalWrite(6,0); //E
  digitalWrite(7,0); //F
  digitalWrite(8,1); //G
  }

void dort()
  {
  digitalWrite(2,0); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,0); //D
  digitalWrite(6,0); //E
  digitalWrite(7,1); //F
  digitalWrite(8,1); //G
  }
void bes()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,0); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,1); //D
  digitalWrite(6,0); //E
  digitalWrite(7,1); //F
  digitalWrite(8,1); //G
  }

void alti()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,0); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,1); //D
  digitalWrite(6,1); //E
  digitalWrite(7,1); //F
  digitalWrite(8,1); //G
  }
void yedi()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,0); //D
  digitalWrite(6,0); //E
  digitalWrite(7,0); //F
  digitalWrite(8,0); //G
  }
void sekiz()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,1); //D
  digitalWrite(6,1); //E
  digitalWrite(7,1); //F
  digitalWrite(8,1); //G
  }

void dokuz()
  {
  digitalWrite(2,1); // A BU
  digitalWrite(3,1); // B 
  digitalWrite(4,1); //C
  digitalWrite(5,0); //D
  digitalWrite(6,0); //E
  digitalWrite(7,1); //F
  digitalWrite(8,1); //G
  }