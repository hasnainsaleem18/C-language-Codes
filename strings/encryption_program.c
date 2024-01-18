#include <stdio.h>
#include <string.h>
void encrypt(char string[]);
//void decrypt(char string[]);

int main()
{

char string[300];
printf("Enter string: ");
fgets(string,sizeof(string),stdin);
printf("string: ");
puts(string);

encrypt(string);
//decrypt(string);

return 0;
}
void encrypt(char string[])
{

for (int i = 0; i<strlen(string); i++)
{ 
  string[i]=string[i+2];
}
  printf("%s", string);
}

















