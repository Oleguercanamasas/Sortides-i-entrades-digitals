//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
byte lletres[7] = {5,6,7,8,9,10,11};
byte c[7] = {1,0,0,1,1,1,0};
byte a[7] = {1,1,1,0,1,1,1};
byte r[7] = {0,0,0,0,1,0,1};
byte l[7] = {0,0,0,0,1,1,0};
byte e[7] = {1,0,0,1,1,1,1};
byte s[7] = {1,0,1,1,0,1,1};

int t = 1000;

//********** SETUP ****************************************************************
void setup() {                // S'executa un sol cop
for (int i = 0;i<7;i++)
{
  pinMode(lletres[i],OUTPUT);
}
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
for (int i = 0;i<7;i++)
{
  digitalWrite(lletres[i],c[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(lletres[i],a[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(lletres[i],r[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(lletres[i],l[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(lletres[i],e[i]);
}
 delay (t);
for (int i = 0;i<7;i++)
{
  digitalWrite(lletres[i],s[i]);
}
 delay (t);
}

//********** FUNCIONS *************************************************************
