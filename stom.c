#include <stdio.h>
#define S_TO_M 60

int main(void)
{
	int sec, min, left;

	printf("Enter the number of seconds\n");
	printf("Enter 0 to end the program\n");

	scanf("%d", &sec);
	while(sec > 0) {
		min = sec / S_TO_M;
		left = sec % S_TO_M;
		printf("%d sec is %d min, %d sec\n", sec, min, left);
		printf("Next input?\n");
		scanf("%d", &sec);
	}

	return 0;
}
