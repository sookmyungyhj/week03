#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float radius, area;
	radius = 10.0;
	area = 3.141592 * radius *radius;
	printf("원의 면적 : %f\n", area);
	return 0;
}
