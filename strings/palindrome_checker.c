#include <stdio.h>
#include <string.h>

void string_palindrome(char name[]);

int main()
{

  char name[30];
  printf("Enter Name: ");
  fgets(name, sizeof(name), stdin);
  printf("Name: ");
  puts(name);
  string_palindrome(name);

  return 0;
}
void string_palindrome(char name[])
{

  int count = 0;
  for (int i = 0; i < strlen(name) - 1 - 1; i++)
  {
    if (name[i] != name[strlen(name) - 1 - 1 - i])
      count++;
  }

  if (count == 0)
    printf("palindrome");
  else
    printf("not palindrome");
}
