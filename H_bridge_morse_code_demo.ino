#define IN1 5  //IN1 on pin 2 conrtols one side of bridge A
#define IN2 4  //IN2 on pin 4 controls other side of A
#define IN3 3  //IN3 on pin 6 conrtols one side of bridge B
#define IN4 2  //IN4 on pin 7 controls other side of B

void setup()
{
  //set all H-bridge pins to outputs
  
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() // Midterm in morse code
{
  morse(1);
  morse(2); // M
  morse(1);

  morse(2);
  delay(200); // Break between letters
  
  morse(0);
  morse(2); // I
  morse(0);
  
  morse(2);
  delay(200);
  
  morse(1);
  morse(2);
  morse(0);  // D
  morse(2);
  morse(0);

  morse(2);
  delay(200);
  
  morse(1); // T
  
  morse(2);
  delay(200);

  morse(0); // E

  morse(2);
  delay(200);

  morse(0);
  morse(2);
  morse(1); // R
  morse(2);
  morse(0);

  morse(2);
  delay(200);

  morse(1);
  morse(2); // M
  morse(1); 
}

void morse(int mode)
{
  switch(mode)
  {
  case 0: //Green On **Dot**
    digitalWrite(IN3, HIGH);   
    digitalWrite(IN4, LOW);  
    break;

  case 1:  //Red On  **Dash**
    digitalWrite(IN3, LOW);   
    digitalWrite(IN4, HIGH);  
    break;

  case 2:  //Both Off **Break**
    digitalWrite(IN3, LOW);   
    digitalWrite(IN4, LOW);  

    break;
  }
}


