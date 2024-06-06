int aberto = 4;
int fechado = 2;
int abrir = 12;

void setup()
{
  pinMode(aberto, INPUT);
  pinMode(fechado, INPUT);
  pinMode(abrir, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int inicioEstado = digitalRead(aberto);
  int fimEstado = digitalRead(fechado);
  
  if (inicioEstado == HIGH)
  {
    Serial.println("Aberto");
  }
  else if (fimEstado == HIGH)
  {
    Serial.println("Fechado");
  }
  else
  {
    digitalWrite(abrir, HIGH);
    Serial.println("Em movimento");
  }
  
  delay(100);
}