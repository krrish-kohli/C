#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);

int capital_letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int small_letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(int argc, string argv[])
{
    // to ensure that argv[1] takes only 1 argument as key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // to ensure that the key is a number and not any other character
    if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //to convert the key to an int from string
    int key = atoi(argv[1]);
    //for getting the plaintext from the user
    string p = get_string("plaintext:  ");
    //for printing the ciphertext
    printf("ciphertext: ");
    for (int i = 0; i < strlen(p); i++)
    {
        char cipher = rotate(p[i], key);
        printf("%c", cipher);
    }
    printf("\n");
}

bool only_digits(string s)
{
    for (int i = 0; i < strlen(s); i++)
    {
        // for returning true value if the key is a number
        if (isdigit(s[i]))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    // for returning false value if key is not a number
    return true;
}

char rotate(char c, int n)
{
    // for returning the same value if it is not a letter and is some special character or number
    if (isalpha(c) == 0)
    {
        return c;
    }
    //for returning the rotated value with the help of provided key if the letter is uppercase
    if (isupper(c))
    {
        int index_upper = (c - 65 + n) % 26;
        char cipher_upper = capital_letters[index_upper];
        return (cipher_upper);
    }
    //for returning the rotated value with the help of provided key if the letter is lowercase
    if (islower(c))
    {
        int index_lower = (c - 97 + n) % 26;
        char cipher_lower = small_letters[index_lower];
        return (cipher_lower);
    }
    return (c);
}