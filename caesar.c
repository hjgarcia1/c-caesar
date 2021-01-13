#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int check_key(char *key);
void encrypt_text(char *text, int key);

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        check_key(argv[1]);

        int key = atoi(argv[1]);

        char plaintext[64];

        printf("What is your text: ");
        fgets(plaintext, 64, stdin);
        printf("\n");
        printf("Plain text: %s\n", plaintext);
        printf("Encrypted text: ");

        encrypt_text(plaintext, key);

        printf("\n");

        return 0;
    }
    else
    {
        printf("You must provide a key.");
        return 1;
    }
}

int check_key(char *key)
{
    int i, length = strlen(key);

    for (i = 0; i < length; i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Entered key is not a number.\n");
            return 1;
        }
    }

    return 0;
}

void encrypt_text(char *text, int key)
{
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            printf("%c", (int)text[i] + key);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
}