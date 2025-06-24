#include<stdio.h>
 
int main(){
	FILE* fptr;
	int num1, num2, num3;

	fptr = fopen("timfile.txt", "w");

	if (fptr == NULL){
	printf("There was an error in the file creation");
	//exits program with error code
	return 1;
	}
	//dividing function
	printf("Please enter the first number: ");
	scanf("%d", &num1);
	printf("Please enter the second number: ");
	scanf("%d", &num2);
	if (num2 == 0){
		printf("Nothing can be divided by 0");
	}else{
		num3 = num1 / num2;
		fprintf(fptr, "The result of %d divided by %d is %d", num1, num2, num3);
	}
    

	
	
	fclose(fptr);
	return 0;
}