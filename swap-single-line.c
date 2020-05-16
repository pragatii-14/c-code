#include <stdio.h>


void main() {
	int num1 , num2;
	
	num1 = 	10;
	num2 =  20;
	
	
	num1 = num2 + num1 - (num2 = num1);
	printf("num1 = %d, num2 =%d", num1, num2);
	
	getch();
}
