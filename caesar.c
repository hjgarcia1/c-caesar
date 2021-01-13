#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int is_digit(const char *numbers)
{
    if (NULL == numbers || *numbers == '\0')
    {
        return 0;
    }

    while (*numbers)
    {
        char c = *numbers;
        
        if (c < '0' || c > '9')
        {
            return 0;
        }
    }

    return 1;
}

int main(int argc, char *argv[])
{
    if (is_digit(1))
    {
        printf("we have digit.");
    }
    else
    {
        printf("no digit");
    }
    return 0;

    // if (argc == 2)
    // {
    //     printf("%i", isNumber(argv[1]);

    //     // if (isNumber(argv[1]) == 1)
    //     // {
    //     //     printf("You must provide a positive integer.");
    //     //     return 1;
    //     // }

    //     // char plaintext[64];
    //     // int i;
    //     // int key = (int)argv[1];

    //     // if (isdigit((int)argv[1]) == 1)
    //     // {
    //     //     printf("What is your text: ");
    //     //     fgets(plaintext, 64, stdin);
    //     //     printf("\n");
    //     //     printf("Plain text: %s\n", plaintext);
    //     //     printf("Encrypted text: ");
    //     //     for (i = 0; i < strlen(plaintext); i++)
    //     //     {
    //     //         if (isalpha(plaintext[i]))
    //     //         {
    //     //             printf("%c", (int)plaintext[i] + key);
    //     //         }
    //     //         else
    //     //         {
    //     //             printf("%c", plaintext[i]);
    //     //         }
    //     //     }

    //     //     printf("\n");
    //     // }
    //     // else
    //     // {
    //     //     printf("You must provide a positive integer.");
    //     //     return 1;
    //     // }

    //     return 0;
    // }
    // else
    // {
    //     printf("You must provide a key.");
    //     return 1;
    // }
}