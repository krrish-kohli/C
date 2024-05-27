#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int capital_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
int small_letters[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
int points[] = {};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)    //if player1 wins
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)   //if player2 wins
    {
        printf("Player 2 wins!\n");
    }
    else    //if both have same scores
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    int n = strlen(word);
    for (int i = 0; i < n; i++)
    {
        //for checking if the letter is capital
        if (isupper(word[i]))
        {
            for (int f = 0; f < sizeof(capital_letters); f++)
            {
                // if the letter is capital then finding the words from capital_letters array and assigning it the value as given by ASCII
                if (word[i] == capital_letters[f])
                {
                    //taking the index of the letter and assigning points to points array according to the index
                    points[i] = POINTS[f];
                    //adding points value to score to get the total score
                    score += points[i];
                }
            }
        }
        if (islower(word[i]))
        {
            // if the letter is small then finding the words from small_letters array and assigning it the value as given by ASCII
            for (int f = 0; f < sizeof(small_letters); f++)
            {
                if (word[i] == small_letters[f])
                {
                    //taking the index of the letter and assigning points to points array according to the index
                    points[i] = POINTS[f];
                    //adding points value to score to get the total score
                    score += points[i];
                }
            }
        }
        //ignoring other characters rather than alphabets
        else
        {
            i += 0;
        }
    }
    //final score
    return score;
}