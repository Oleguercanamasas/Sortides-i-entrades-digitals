
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
int AV = 12;
int AC = 11;
int AR = 10;
int BV = 9;
int BC = 8;
int BR = 7;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
  pinMode(AV, OUTPUT);
  pinMode(AC, OUTPUT);
  pinMode(AR, OUTPUT);
  pinMode(BV, OUTPUT);
  pinMode(BC, OUTPUT);
  pinMode(BR, OUTPUT);
  
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
  digitalWrite (AR, HIGH);
  digitalWrite (BR, HIGH);

  delay (1000);

  digitalWrite (BR, LOW);
  digitalWrite (BV, HIGH);

  delay (4000);

  digitalWrite (BV, LOW);
  digitalWrite (BC, HIGH);

  delay (1000);

  digitalWrite (BC, LOW);
  digitalWrite (BR, HIGH);

  delay (1000);

  digitalWrite (AR, LOW);
  digitalWrite (AV, HIGH);

  delay (4000);

  digitalWrite (AV, LOW);
  digitalWrite (AC, HIGH);

  delay (1000);

  digitalWrite (AC, LOW);
  digitalWrite (AR, HIGH);

  delay (1000);


  
}

//********** FUNCIONS *************************************************************
