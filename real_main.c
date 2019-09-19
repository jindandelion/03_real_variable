#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("bytes of int : %d\n", sizeof(x));
	
	int input_int;
	float input_float;
	
	printf("enter integer : ");
	scanf("%d", &input_int);
	
	printf("enter integer : ");
	scanf("%d", &input_float);
	
	printf("integer : %d, float : %f\n", input_int, input_float);
	
	printf("Hello Sookmyung EE!\n");
	
	return 0;
}
