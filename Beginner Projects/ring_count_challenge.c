#include <stdio.h>

#include <stdlib.h>         // import all required libraries...

#include <string.h>        // string library

char ringwords[] = {
  'a',
  'A',
  'b',
  'd',
  'D',                    // array of all alphabets that have rings.
  'e',
  'g',
  'o',
  'O',
  'p',
  'P',
  'q',
  'Q',
  'R'
};

int main() {

  FILE * ptr;                                    // first pointer with file type
  FILE * ptr2;                                   // second pointer with file type
  char arr[100];                                 // taking string
  char filename[] = "ring_count_challenge_input.txt";      // storing input filename to character filename[] array.
  char filename2[] = "ring_count_challenge_output.txt";    // storing output filename to character filename2[] array.
  ptr = fopen(filename, "r");                    // opening file in read mode in first pointer.
  ptr2 = fopen(filename2, "w");                  // opening file in write mode in second pointer.
                                  
  fgets(arr, sizeof(arr), ptr);             // for reading a string value with spaces with 3 arguments 1.variable to read 2.calculate the size of array 3.file pointer 
  int k;                                          // k is initalized so that it can use outside the loop.
  for (k = 0; arr[k] != '\0'; k++) {}            // for loop till end of string.

  for (int i = 0; arr[i] != '\0'; i++) {              // for loop till end of string
    for (int j = 0; j < sizeof(ringwords); j++) {     // loop will run till size of ring words array.
      if (arr[i] == ringwords[j]) {                   // checking if string is equal to ringwords array or not.
        k--;                                          // if yes then decriment k that have no ring letters
      }
    }
  }

  if (k / 2 < 1) {                            // no rings letters i.e k are dividing by 2 as per formula and checking condition for output 
    fprintf(ptr2, "not even a medal!");       // printing in output file with fprintf that take 2 arguements
  } else if (k / 2 == 2) {
    fprintf(ptr2, "Bronze!");

  } else if (k / 2 == 3) {
    fprintf(ptr2, "Silver!");                // same conditions as per question requirements
  } else {
    fprintf(ptr2, "Gold!");
  }
  
  fclose(ptr);                // closing first opened file.
  fclose(ptr2);               // closing second opened file.
  
  return 0;                                 // end of program.
}
