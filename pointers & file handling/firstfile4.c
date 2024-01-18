#include <stdio.h>
#include <string.h>
void print_name();

int main()
{

FILE *ptr;
int count;
char arr[50];
char filename[] = "names.txt";
ptr = fopen(filename, "r");

printf("\n***PART 2***\n\n");
while (fscanf(ptr,"%c\n",arr) != EOF)
{
count++;
}
printf("%d\n", count);

fclose(ptr);

}
