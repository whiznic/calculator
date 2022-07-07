#include <stdio.h>


int main(){
	
	printf("Enter an operator: (+, -, x, /)\n ");
	char oper;
	scanf("%c",&oper);


	if (oper == '+' || oper == '-' || oper == 'x' || oper == '/')
	{
		printf("Enter 1st number: ");
		float num1;
		scanf("%2f", &num1);


		printf("Enter 2nd number: ");
		float  num2;
		scanf("%2f", &num2);


		switch(oper){
			case '+':{
				float sum = num1 + num2;
				printf("The result is: %.22f\n", sum);
				break;
			}
			case '-':{
				float diff = num1 - num2;
				printf("The result is: %.22f\n", diff);
				break;
			}
			case 'x':{
				float product = num1 * num2;
				printf("The result is: %.22f\n", product);
				break;
			}
			case '/':{
				float division = num1 / num2;
				printf("The result is: %.22f\n", division);
				break;
			}

		}

	} else {
		printf("please enter a valid operand: \n");
	}

	return 0;
}
