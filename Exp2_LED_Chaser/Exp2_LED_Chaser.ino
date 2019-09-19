void setup()  
{
  for(int i=9;i<13;i++)
  {
    pinMode(i,OUTPUT);
  }
}  
void loop()   
 {
   for(int i=9;i<13;i++)
   {
     ALO();
     if(i!=12)
     {
       digitalWrite(i,HIGH);     
       digitalWrite(i+1,HIGH);
       delay(1000);              
     }
     else
     {
       digitalWrite(i,HIGH);
       digitalWrite(i-3,HIGH);
       delay(1000);
       ALO();
     }
   }
}
   void ALO(void)      
   {
     for(int i=9;i<13;i++)
     {
       digitalWrite(i,LOW);
     }
   }
