#include <stdio.h>
#include <cs50.h>
#include <math.h>

float change(void);

int main(void)
{
    float dollar = change();
    float c = dollar * 100;
    c = round(c);
    int cents = (int)c;
    int coins = 0;
    
 
  for(int i = cents; i > 0 ; )
  {
      while(cents >= 25)
      {
        coins = coins + 1;
        cents = cents-25;
      }
      
      while(cents < 25 && cents >= 10)
      {
        coins = coins + 1;
        cents = cents-10;
      }
      
      while(cents < 10 && cents >= 5)
      {
        coins = coins + 1;
        cents = cents-5;
      }
      
      while(cents < 5 && cents >= 1)
      {
        coins = coins + 1;
        cents = cents-1;
      }
      
      break;
     
  }
  printf("%i\n", coins);
}
  


float change(void)
{
    float c;
    do
    {
        printf("How much change is owed?\n");
        c = get_float();
    }
    
    while (c < 0);
    return c;
}