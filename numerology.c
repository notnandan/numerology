#include <stdio.h>
int main() {
	int choice;
	float num1, num2, sum;
	while(1){
		printf("NUMEROLOGY\n");
		printf("Select choice:\n");
		printf("[1]Addition\n[2]Subtraction\n[3]Multiplication\n[4]Division\n[0]Exit Program\n");
		printf("Enter the choice number:");
		scanf("%d", &choice);

		if (choice == 0){
			printf("Exiting program...Thank you for using Numerology.\n");
			break;
		}
		if (choice >=1 && choice <=4 ) {
			printf("Enter first number: \n");
			scanf("%f",&num1);
			printf("Enter second number: \n");
			scanf("%f", &num2);
		}
		switch(choice){
			case 1:
				printf("Result:%.2f\n", num1 + num2);
				break;
			case 2:
				printf("Result: %.2f\n", num1 - num2);
				break;
			case 3:
				printf("Result: %.2f\n", num1 * num2);
				break;
			case 4:
				if(num2 != 0){
				printf("Result: %.2f\n", num1 / num2);
				}
				else{
					printf("My man, are you dumb or what? You can't divide by 0!\n");
				}
				break;

			default:
				printf("Invalid choice. Try again.\n");
		}
	}
	return 0;
}

