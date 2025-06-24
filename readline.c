#include <stdio.h>


int main()
{
FILE *fptr;
char line[1000];
/* Open file and check it is open */
while (fgets(line,1000,fptr) != NULL) 
{
   printf ("Read line %s\n",line);
}
    return 0;
}


