#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height=");
    }
    while (n > 8 || n < 1);
    if (n == 1)
    {
        for (int i = 0; i < 1; i++)
       {
            printf("       #");
       }
       printf("\n");
    }
    else if (n == 2)
    {
      for (int i = 0; i < 1; i++)
      {
           printf("       #");
      }
       printf("\n");
       for (int q = 1; q < 2; q++)
      {
            printf("      ##");
      }
       printf("\n");
      }
    else if (n == 3)
    {
       for (int i = 0; i < 1; i++)
      {
            printf("       #");
      }
       printf("\n");
      for (int q = 1; q < 2; q++)
      {
           printf("      ##");
      }
       printf("\n");
      for (int w = 2; w < 3; w++)
      {
           printf("     ###");
      }
       printf("\n");
    }
    else if (n == 4)
    {
      for (int i = 0; i < 1; i++)
      {
           printf("       #");
      }
       printf("\n");
      for (int q = 1; q < 2; q++)
      {
           printf("      ##");
      }
       printf("\n");
      for (int w = 2; w < 3; w++)
      {
           printf("     ###");
      }
       printf("\n");
      for (int e = 3; e < 4; e++)
      {
           printf("    ####");
      }
       printf("\n");
    }
    else if (n == 5)
    {
      for (int i = 0; i < 1; i++)
      {
           printf("       #");
      }
       printf("\n");
      for (int q = 1; q < 2; q++)
      {
           printf("      ##");
      }
       printf("\n");
      for (int w = 2; w < 3; w++)
      {
           printf("     ###");
      }
       printf("\n");
      for (int e = 3; e < 4; e++)
      {
           printf("    ####");
      }
       printf("\n");
      for (int r = 4; r < 5; r++)
      {
           printf("   #####");
      }
       printf("\n");
    }
    else if (n == 6)
    {
      for (int i = 0; i < 1; i++)
      {
           printf("       #");
      }
       printf("\n");
      for (int q = 1; q < 2; q++)
      {
           printf("      ##");
      }
       printf("\n");
      for (int w = 2; w < 3; w++)
      {
           printf("     ###");
      }
       printf("\n");
      for (int e = 3; e < 4; e++)
      {
           printf("    ####");
      }
       printf("\n");
      for (int r = 4; r < 5; r++)
      {
           printf("   #####");
      }
       printf("\n");
      for (int t = 5; t < 6; t++)
      {
           printf("  ######");
      }
       printf("\n");
    }
    else if (n == 7)
    {
      for (int i = 0; i < 1; i++)
      {
           printf("       #");
      }
       printf("\n");
      for (int q = 1; q < 2; q++)
      {
           printf("      ##");
      }
       printf("\n");
      for (int w = 2; w < 3; w++)
      {
           printf("     ###");
      }
       printf("\n");
      for (int e = 3; e < 4; e++)
      {
           printf("    ####");
      }
       printf("\n");
      for (int r = 4; r < 5; r++)
      {
           printf("   #####");
      }
       printf("\n");
      for (int t = 5; t < 6; t++)
      {
           printf("  ######");
      }
       printf("\n");
      for (int y = 6; y < 7; y++)
      {
           printf(" #######");
      }
       printf("\n");
    }
    else if (n == 8)
    {
      for (int i = 0; i < 1; i++)
      {
           printf("       #");
      }
       printf("\n");
      for (int q = 1; q < 2; q++)
      {
           printf("      ##");
      }
       printf("\n");
      for (int w = 2; w < 3; w++)
      {
           printf("     ###");
      }
       printf("\n");
      for (int e = 3; e < 4; e++)
      {
           printf("    ####");
      }
       printf("\n");
      for (int r = 4; r < 5; r++)
      {
           printf("   #####");
      }
       printf("\n");
      for (int t = 5; t < 6; t++)
      {
           printf("  ######");
      }
       printf("\n");
      for (int z = 7; z < 8; z++)
      {
           printf("########");
      }
       printf("\n");
    }
    else
    {
       printf("%i\n", n);
    }
}