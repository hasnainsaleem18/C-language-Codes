#include <stdio.h>
#include <string.h>
void print_name();

int main()
{

FILE *ptr;
FILE *ptr2;
int count;
char arr[50];
int sum = 0;
char filename[] = "names.txt";
char filename2[] = "name_subj.txt";
ptr = fopen(filename, "r");
ptr2 = fopen(filename2, "a");

printf("***PART 1***\n\n");
while (fgets(arr, sizeof(arr), ptr) != NULL)
printf("%.4s\n", arr);


printf("\n***PART 2***\n\n");
while (fscanf(ptr,"%c\n",arr) != EOF)
{
count++;
}
printf("%d\n", count);

int length = 4;
print_name(length);

printf("***PART 4***\n\n");
while (fscanf(ptr,"%s\n",arr) != EOF)
{
fprintf(ptr2, "%s, Programming Fundamentals, Calculus, English Composition\n", arr);
}

fclose(ptr);

}
void print_name(int length)
{

printf("\n***PART 3***\n\n");
FILE *ptr;
int count = 0;
char arr[50];
int sum = 0;
char filename[] = "names.txt";
ptr = fopen(filename, "r");

while (fgets(arr, sizeof(arr), ptr) != NULL)
 {
  if (strlen(arr+2) == length)
   {
    printf("%s", arr);
   }
 }
fclose(ptr);
}




