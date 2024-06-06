int aberto = 4;
int fechado = 2;
int comando = 8;
int ligado = 12;
int direcao = 13;
int dir = 1;

void setup()
{
  pinMode(aberto, INPUT);
  pinMode(fechado, INPUT);
  pinMode(comando, INPUT);
  pinMode(ligado, OUTPUT);
  pinMode(direcao, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int inicioEstado = digitalRead(aberto);
  int fimEstado = digitalRead(fechado);
  int com = digitalRead(comando);
  delay(400);

  if (inicioEstado == HIGH)
  {
    Serial.println("Aberto");
    digitalWrite(ligado, 0);
    dir = 1;
  }
  else if (fimEstado == HIGH)
  {
    Serial.println("Fechado");
    digitalWrite(ligado, 0);
    dir = 0;
  }
  else
  {
    digitalWrite(direcao, dir);
    if (com == HIGH)
    {
      if (dir == 1)
      {
        dir = 0;
        Serial.println("Portão fechando");
      }
      else
      {
        dir = 1;
        Serial.println("Portão abrindo");
      }
      digitalWrite(ligado, 1);
    }
  }
}