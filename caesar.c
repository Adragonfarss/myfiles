#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{


    if(argc != 2)           // check only for two arguements..
    {
        printf("Usage: ./caeser key\n");
    }


    for(int key = 0; key < strlen(argv[1]); key++)      
    {

        if(isalpha(argv[1][key]))       // if the input is not a digit print the error message...
        {
            printf("Usage: ./caesar key\n");
        }

    }

    int key =atoi(argv[1]) % 26;        // converting string value to integer....
    
    string plaintext = get_string("plaintext: ");       // get a text from user.. 


    printf("ciphertext: ");

    for(int i = 0; i < strlen(plaintext); i++)
    {

        if(!isalpha(plaintext[i]))
        {
            printf("%c", plaintext[i]);
            continue;
        }


        int ascii_offset = isupper(plaintext[i]) ? 65 : 97;


        int pi = plaintext[i] - ascii_offset;
        int ci = (pi + key) % 26;

        printf("%c", ci + ascii_offset);
    }


    printf("\n");
    return 0;
}