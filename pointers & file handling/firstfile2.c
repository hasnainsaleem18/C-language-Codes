#include <stdio.h>
int main()
{
FILE *ptr;
char arr[50];
char filename[] = "firstfile.txt";
ptr = fopen(filename, "r");
while (fgets(arr, sizeof(arr), ptr) != NULL)
printf("%s", arr);
fclose(ptr);
}


