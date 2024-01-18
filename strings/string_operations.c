#include <stdio.h>
#include <string.h>
int vowels(char option, char string[]);
int vowels_and_consonants(char option, char string[]);
int main()
{

  int vowels1;
  int con;
  char option;

  char string[300];
  printf("Enter string: ");
  fgets(string, sizeof(string), stdin);
  printf("string: ");
  puts(string);

  for (option; option != 'E';)
  {

    printf("option 'A': Count the number of vowels in the string\n");
    printf("option 'B': Count both the vowels and consonants in the string\n");
    printf("option 'C': Display the most frequent character in the string.\n");
    printf("option 'D': Concatenate another string with the existing string.\n");
    printf("option 'E': Exit the program.\n\n");
    printf("Enter your Option: ");
    scanf("\n %c", &option);

    if (option == 'A')
    {
      vowels1 = vowels(option, string);
      printf("\ntotal vowels are: %d\n\n", vowels1);
    }
    else if (option == 'B')
    {
      vowels1 = vowels(option, string);
      printf("\ntotal vowels are: %d", vowels1);
      con = vowels_and_consonants(option, string);
      printf("\ntotal consonants are: %d\n\n", con);
    }
    else if (option == 'D')
    {
      char c[4] = "CODE";
      strcat(c, string);
      printf("\nThe word concatinate is: %s\n", c);
    }
    else if (option == 'C')
    {

      int sum = 0;
      char charr;
      for (int i = 0; i < strlen(string); i++)
      {
        int count = 0;
        for (int j = i + 1; j < strlen(string); j++)
        {
          if (string[i] == string[j])
          {
            count++;
            if (sum < count)
            {
              sum = count;
              charr = string[i];
            }
          }
        }
      }
      printf("\nMost frequent character = %c \n", charr);
    }
  }
  return 0;
}
int vowels(char option, char string[])
{
  int count = 0;
  for (int i = 0; i < strlen(string) - 1; i++)
  {
    if ('a' == string[i])
      count++;
    else if ('e' == string[i])
      count++;
    else if ('i' == string[i])
      count++;
    else if ('o' == string[i])
      count++;
    else if ('u' == string[i])
      count++;
  }

  return count;
}
int vowels_and_consonants(char option, char string[])
{
  int count = 0;
  int count2 = 0;
  for (int i = 0; i < strlen(string) - 1; i++)
  {
    if ('a' == string[i])
      count++;
    else if ('e' == string[i])
      count++;
    else if ('i' == string[i])
      count++;
    else if ('o' == string[i])
      count++;
    else if ('u' == string[i])
      count++;
    else
      count2++;
  }

  return count2;
}
