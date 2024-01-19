#include <stdio.h>

#include <stdlib.h>              // import all required libraries...

#include <string.h>

void sorted_array(char arr1[5][10], char arr2[5][10], char r1[10], char r2[10]);    // function declared with three parameters having 2darrays

int main() {
  char arr1[5][10];      // all arrrays required
  char arr2[5][10];
  char r1[10];
  char r2[10];

  for (int i = 0; i < 3; i++) {                             // loop for getting array from user and stored to arr1 
    printf("Enter the %d string\n", i + 1);
    gets(arr1[i]);
  }

  for (int i = 0; i < 5; i++) {
    printf("Enter the %d string\n", i + 1);                          // loop for getting array from user and stored to arr2
    gets(arr2[i]);
  }
 
  sorted_array(arr1, arr2, r1, r2);        // func is calling
 
  return 0;
}
void sorted_array(char arr1[5][10], char arr2[5][10], char r1[10], char r2[10]) {    //func started or defined

  FILE * ptr; // first pointer with file type
  FILE * ptr2; // second pointer with file type

  char filename[] = "lexicographicalOrder.txt"; // storing input filename to character filename[] array.
  char filename2[] = "lexicographicalOrder.txt"; // storing output filename to character filename2[] array.
  ptr = fopen(filename, "r"); // opening file in read mode in first pointer.
  ptr2 = fopen(filename2, "w");   // opening file in write mode in second pointer.

  for (int i = 0; i < 3; i++) {                           //loop started for getting arr1 string 1 and storing to r1 in dictionary order
    for (int j = i + 1; j < 3; j++) {
      if (strcmp(arr1[i], arr1[j]) > 0) {
        strcpy(r1, arr1[i]);
        strcpy(arr1[i], arr1[j]);
        strcpy(arr1[j], r1);
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {             
      if (strcmp(arr2[i], arr2[j]) > 0) {             //loop started for getting arr2 string 2 and storing to r2 in dictionary order
        strcpy(r2, arr2[i]);
        strcpy(arr2[i], arr2[j]);
        strcpy(arr2[j], r2);
      }
    }
  }

  fprintf(ptr2, "In Lexagrophical order\n");
  for (int i = 0; i < 3; i++) {                           // storing output in output text file
    fprintf(ptr2, "%s ", arr1[i]);
  }

  fprintf(ptr2, "\nIn Lexagrophical order\n");
  for (int i = 0; i < 5; i++) {                         // storing output in output text file
    fprintf(ptr2, "%s ", arr2[i]);
  }

}
