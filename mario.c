#include <stdio.h>
#include <cs50.h>

int num(void);
void hash(int n);
void posthash(int n);
int main(void) 
{
    int number = num();
    hash(number);
    
    
}

int num(void)
{
    int n;
    do
    {
        printf("Give a postive integer below 24 ");
        n = get_int();
    }
    
    while (n < 0 || n > 23 );
    return n;
}

void hash(int n)
{
    for (int i = 1; i <= n ; i++)
    {
        for (int space = (n-i); space > 0; space--)
        {
            printf(" ");
        }
        posthash(i);
        printf("  ");
        posthash(i);
        printf("\n");
    }
    
}

void posthash(int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("#");
    }
}

