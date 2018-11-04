int rs = 2;
int ce = 3;

int d4 = 8;
int d5 = 9;
int d6 = 10;
int d7 = 11;

void setup() {
  pinMode(rs, OUTPUT);
  pinMode(ce, OUTPUT);

  pinMode(d4, OUTPUT);
  pinMode(d5, OUTPUT);
  pinMode(d6, OUTPUT);
  pinMode(d7, OUTPUT);
  
  delay(100);
  digitalWrite(ce, 0);
  digitalWrite(rs, 0);

  // Initialization sequence.
  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  delayMicroseconds(4500);

  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  delayMicroseconds(4500);

  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  delayMicroseconds(4500);

  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  delayMicroseconds(4500);

  // Set 8 bit, 2 line, 5x8.
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 1);
  pulse();
  delayMicroseconds(4500);

  // Display on.
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 1);
  pulse();
  delayMicroseconds(4500);

  // Clear display.
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  delayMicroseconds(4500);

  // Entry mode.
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  delayMicroseconds(4500);
  
}

void loop() {
  // Set Address to position on line 1.
  digitalWrite(rs, 0);
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 1);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  
  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 1);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();

 
  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 1);
  pulse();
  

  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 1);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 1);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 1);
  pulse();

  // Set Address to position on line 2.
  digitalWrite(rs, 0);
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 1);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 0);
  digitalWrite(d6, 1);
  digitalWrite(d7, 0);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 1);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();

  digitalWrite(rs, 1);
  digitalWrite(d4, 0);
  digitalWrite(d5, 1);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  digitalWrite(d4, 1);
  digitalWrite(d5, 0);
  digitalWrite(d6, 0);
  digitalWrite(d7, 0);
  pulse();
  
  delay(10000);

}

void pulse() {
  digitalWrite(ce, 0);
  delayMicroseconds(1); 
  digitalWrite(ce, 1);
  delayMicroseconds(1); 
  digitalWrite(ce, 0);
  delayMicroseconds(100);
}

