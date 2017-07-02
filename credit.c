#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long cc_num, x, y;
    int sum1, sum2, sum;

    
    do 
    {
        printf("Enter your credit card number:\n");
        cc_num = get_long_long();
    }
       
    while (cc_num < 0);
        
        for (y = cc_num / 10, sum1 = 0; y > 0; y = y/100)
        {
            if (2 * (y%10) > 9)
            {
             sum1 = sum1 + (2 * (y%10) / 10);
             sum1 = sum1 + (2 * (y%10) % 10);
            }
            else
                sum1 = sum1 + (2* (y%10));
        }
        
        for (x = cc_num, sum2 = 0; x > 0; x = x/100)
        {
            sum2 = sum2 + (x%10);
        }
        
    sum = sum1 + sum2;
    
    if (sum%10 == 0)
    {
        if ((cc_num >= 340000000000000 && cc_num < 350000000000000) || (cc_num >= 370000000000000 && cc_num < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (cc_num >= 5100000000000000 && cc_num < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((cc_num >= 4000000000000  && cc_num < 5000000000000) || (cc_num >= 4000000000000000  && cc_num < 5000000000000000))
        {
            printf("VISA\n");
        }
        
    }
    
    else
        {
            printf("INVALID\n");
            return 0;
        }
}