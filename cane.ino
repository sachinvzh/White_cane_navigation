int irsensor = 2;
int vm = 13;

void setup()
{
  pinMode(irsensor, INPUT);
  pinMode(vm, OUTPUT);
}

void loop()
{
  int sensor_status = digitalRead(irsensor);

  if (sensor_status == 1)
  {
    digitalWrite(vm, HIGH);
  }
  else
  {
    digitalWrite(vm, LOW);
  }
}
