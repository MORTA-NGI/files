#include <stdio.h>

// Function prototypes
int add(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    FILE *fptr;
    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    // Open the file in write mode
    fptr = fopen("output.txt", "w");
    if (fptr == NULL) {
        printf("ERROR IN FILE CREATION\n");
        return 1;  // Exit the program with an error code
    }
    int resultsum = add(num1, num2);
    float resultdiv = divide(num1, num2);
    // Write the results to the file
    fprintf(fptr, "Sum of %d and %d is: %d\n", num1, num2, resultsum);
    if (num2 != 0) {
        fprintf(fptr, "Quotient of %d divided by %d is: %.2f\n", num1, num2, resultdiv);
    } else {
        fprintf(fptr, "Division by zero is undefined.\n");
    }

    // Close the file
    fclose(fptr);
    
    printf("Results written to output.txt\n");
    return 0;
}


int add(int a, int b) {
    return a + b;
}


float divide(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        return 0; 
    }
}
