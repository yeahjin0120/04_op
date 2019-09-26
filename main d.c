#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int y;
	
	x=10;
	y=2;
	
	printf("enter 2 integers :");
	scanf ("%d %d", &x, &y);
	
	printf("plus is %i\n:", x+y);
	printf("minus is %i\n:", x-y);
	printf("multiply is %i\n:", x*y);
	printf("division is %i\n:", x/y);
	printf("namoji is %i\n:", x%y);

	
	
	return 0;
}
