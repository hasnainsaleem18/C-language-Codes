#include <stdio.h>
                                             // import all required libraries...
#include <string.h>    

int main() {

  FILE * ptr = NULL;                                 // first pointer with null.
  FILE * ptr2 = NULL;                                // first pointer with null.
  char filename[] = "matrices_input.txt";          // storing input filename to character filename[] array.
  char filename2[] = "matrices_output.txt";        // storing input filename to character filename2[] array.
  ptr = fopen(filename, "r");                        // opening file in read mode in first pointer.
  ptr2 = fopen(filename2, "w");                      // opening file in write mode in second pointer.
  if (ptr == NULL) {                                 // if file 1 is empty 
    puts("error");                                   // show this message
    return 1;
  }
  if (ptr2 == NULL) {          // if file 2 is empty 
    puts("error2");           // show this message
    return 1;
  }
  int row1;    
  int columns1;                 // initialized all cols and rows variables.
  int row2;
  int columns2;
  
  fscanf(ptr, "%d", & row1);        // row1 will be read from file for matrix 1
  fscanf(ptr, "%d", & columns1);    // col1 will be read from file for matrix 1
  
  int matrixA[row1][columns1];                     // both row and col values stored in array of matrix 1
  
  for (int i = 0; i < row1; i++) {                 // loop for taking values from file input.
    for (int j = 0; j < columns1; j++) {
      fscanf(ptr, "%d", & matrixA[i][j]);          // reading values from file.
    }
    printf("\n");    
  }
  
  fscanf(ptr, "%d", & row2);         // row2 will be read from file for matrix b
  fscanf(ptr, "%d", & columns2);     // col2 will be read from file for matrix b
  
  int matrixB[row2][columns2];      // both row2 and col2 values stored in array of matrix b
  
  for (int i = 0; i < row2; i++) {           // loop for taking values from file input.
    for (int j = 0; j < columns2; j++) {
      fscanf(ptr, "%d", & matrixB[i][j]);     // reading values from file.
    }
    printf("\n");
  }
  
  int matrixC[row1][columns2];      // taking row1 and col2 values stored in array of matrix c
  
  if (columns1 != row2) {        // if col1 and row2 are not same then matrix will not be multiplied
    fprintf(ptr2, "END");        // will display message in output file if condition is true.
  } else {

    for (int i = 0; i < row1; i++) {                          // multiplying both matrix 
      for (int j = 0; j < columns2; j++) {
        int sum = 0;
        for (int k = 0; k <= row1; k++) {
          sum = sum + matrixA[i][k] * matrixB[k][j];           // formula
        }
        matrixC[i][j] = sum;      // storing product of both matrix
      }
    }

    fprintf(ptr2, "%d ", row1);          // matrix c rows and cols are displaying in output file. 
    fprintf(ptr2, "%d\n", columns2);
    fprintf(ptr2, "\n");

    for (int i = 0; i < row1; i++) {                  // in output file the product of matrix c is displaying by for loop.
      for (int j = 0; j < columns2; j++) {
        fprintf(ptr2, "%d ", matrixC[i][j]);
      }
      fprintf(ptr2, "\n");
    }

  }

  fclose(ptr);                   // closing first opened file.
  fclose(ptr2);                  // closing second opened file.
  return 0;                      // end of program.
}
