#include <stdio.h>

int main() {
  FILE *fptr;

  // Open a file in writing mode
  fptr = fopen("fristfile.txt", "w");
  // Write some text to the file 5 times
  for (int i = 0; i < 5; i++)
  {
   fprintf(fptr, "this is first line text \n");
  }
   
  // Close the file
  fclose(fptr);

  return 0;
}
