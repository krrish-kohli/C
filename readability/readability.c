#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //Getting the input from the user
    string text = get_string("Text: ");
    //for calculating the number of letters
    int Letter = count_letters(text);
    //for calculating the number of words
    int Word = count_words(text);
    //for calculating the number of sentences
    int Sentence = count_sentences(text);
    float L = Letter * 100.0 / (Word);
    float S = Sentence * 100.0 / (Word);
    //Applying Coleman-Liau index
    float index = 0.0588 * L - 0.296 * S - 15.8;
    //Converting the index to the nearest integer
    index = round(index);
    //for telling the grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index == 1)
    {
        printf("Grade 1\n");
    }
    else if (index == 2)
    {
        printf("Grade 2\n");
    }
    else if (index == 3)
    {
        printf("Grade 3\n");
    }
    else if (index == 4)
    {
        printf("Grade 4\n");
    }
    else if (index == 5)
    {
        printf("Grade 5\n");
    }
    else if (index == 6)
    {
        printf("Grade 6\n");
    }
    else if (index == 7)
    {
        printf("Grade 7\n");
    }
    else if (index == 8)
    {
        printf("Grade 8\n");
    }
    else if (index == 9)
    {
        printf("Grade 9\n");
    }
    else if (index == 10)
    {
        printf("Grade 10\n");
    }
    else if (index == 11)
    {
        printf("Grade 11\n");
    }
    else if (index == 12)
    {
        printf("Grade 12\n");
    }
    else if (index == 13)
    {
        printf("Grade 13\n");
    }
    else if (index == 14)
    {
        printf("Grade 14\n");
    }
    else if (index == 15)
    {
        printf("Grade 15\n");
    }
    else if (index == 16)
    {
        printf("Grade 16\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text)
{
    //declaring a variable for counting the number of letters
    int count1 = 0;
    //for checking wether the letters are alphabetical or not
    for (int i = 0; i < strlen(text); i++)
    {
        //to increase the score1, if it is alphabetical
        if (isalpha(text[i]))
        {
            count1 ++;
        }
    }
    return count1;
}

int count_words(string text)
{
    //declaring a variable for counting the number of words
    int count2 = 1;
    //for checking how many words are there
    for (int i = 0; i < strlen(text); i ++)
    {
        //to increase the score2 if there is space between letters
        if (text[i] == ' ')
        {
            count2++;
        }
    }
    return count2;
}

int count_sentences(string text)
{
    //declaring a variable for counting the number of sentences
    int count3 = 0;
    //for checking how many sentences are there
    for (int i = 0; i < strlen(text); i++)
    {
        //to increase the score3 if there is (.),(?) or (!) between words
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count3++;
        }
    }
    return count3;
}