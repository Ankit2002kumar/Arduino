//Simplify the following Boolean functions, using three-variable maps:
//(b)  F (x, y, z) = summation(1, 2, 3, 6, 7)


int X=1,Y=0,Z=0;
int F;
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(2, a); 
  digitalWrite(3, b); 
  digitalWrite(4, c); 
  digitalWrite(5, d); 
  digitalWrite(6, e); 
  digitalWrite(7, f);     
  digitalWrite(8, g); 
}
void setup() 
{
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);            
}
void loop() 
{
  F=(Z&&!X) || (Y);
  if (F==0){
   sevenseg(0,0,0,0,0,0,1);
  }
  else{
     sevenseg(1,0,0,1,1,1,1);  
   }
}
