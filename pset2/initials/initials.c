#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = get_string();
    if (name != NULL)
    {
        char temp;
        if (name[0] != ' ')
        {
            temp = toupper(name[0]);
            printf("%c", temp);
        }
        for(int i = 0, j = strlen(name); i < j-1; i++)
        {
            if (name[i] == ' ')
            {
                temp = toupper(name[i+1]);
                if (temp != ' ')
                {
                    printf("%c",temp);
                }
            }

        }
        printf("\n");
    }
}