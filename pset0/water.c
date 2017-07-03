#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf ("How many minutes do you take to shower?\n");
    int minutes = get_int();
    printf ("You use %i bottles of water per shower! That's a lot of water!\n", (minutes*192)/16);
}
