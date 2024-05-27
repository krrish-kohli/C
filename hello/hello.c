#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name?\n");
    //getting the name of the user
    printf("hello, %s\n", name);
    //saying hello to the user with his/her name
}