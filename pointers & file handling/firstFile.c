#include <stdio.h>
int main()
{
FILE *ptr;
char name[50];
char roll[50];
float cgpa;
char filename[] = "firstfile.txt";
ptr = fopen(filename, "w");
printf("enter your name: \n");
scanf("%s", name);
printf("enter your roll number: \n");
scanf("\n%s", roll);
printf("enter your cgpa: \n");
scanf("%f", &cgpa);
fprintf(ptr, "%s\n%s\n%.2f\n", name,roll,cgpa);
//fprintf(ptr, "%s\n", roll);
//fprintf(ptr, "%f\n", cgpa);
fclose(ptr);
return 0;
}
