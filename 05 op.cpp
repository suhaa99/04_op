#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	
	printf("enter an integer : ");
	scanf("%d", &a);
	
	printf("enter an integer : ");
	scanf("%d", &b);
	
	printf("plus : %i, minus : %i, multiplication : %i, division : %i, remainder : %i", a+b, a-b, a*b, a/b, a%b);
	return 0;
}
