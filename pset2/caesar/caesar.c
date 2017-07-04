#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    string k;
    int key;
    k = argv[1];
    if (argv[1] != NULL && argc == 2 && k > 0)
    {
        key = atoi(argv[1]);
    }
    else
    {
    printf("Enter Command Line Arguement\n");
    return 1;
    }
    
    printf("plaintext: ");
    string plain = get_string();
    
    if (plain != NULL)
    {
        printf("ciphertext: ");
        
        //iterates through each character of the inputted string
        for(int i = 0, j = strlen(plain); i <= j-1; i++)
        {
            char temp = plain[i];
            //checks if character is an alphabet
            if (isalpha(temp))
            {
               int number = temp;
              // if (key <= 26)
             //  {
                    if (number >= 65 && number<=90)
                    {
                        int n1 = number + key;
                        if(n1 <= 90)
                        {
                            printf("%c", n1);
                        }
                        else if(n1 > 90)
                        {
                            int stop = n1-26;
                            if (stop <= 90)
                            {
                            printf("%c", stop);
                            }
                            else if (stop > 90 && stop <= 116)
                            {
                                printf("%c", stop-26);
                            }
                            else if (stop > 116 && stop <= 142)
                            {
                                printf("%c", stop-52);
                            }
                        }
                    }
               
                    else if (number >= 97 && number <= 122)
                    {
                        int n1 = number + key;
                        if(n1 <= 122)
                        {
                            printf("%c", n1);
                        }
                        else if(n1 > 122)
                        {
                            int stop = n1-26;
                            if (stop <= 122)
                            {
                            printf("%c", stop);
                            }
                            else if (stop > 122 && stop <= 148)
                            {
                                printf("%c", stop-26);
                            }
                            else if (stop > 148 && stop <= 174)
                            {
                                printf("%c", stop-52);
                            }
                        }
                    }
                    else if (number == 35)
                    {
                        printf(" ");
                    }
            //   }
               //else if (key > 26)
              // {
                   
              // }
            }
            else 
            {
             int numb = temp;
             printf("%c", numb);   
            }
        }
    
        printf("\n");
    }
    return 0;    
}