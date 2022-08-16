#include <stdio.h>
#define PI 3.14
#define MIN(a,b)((a)<(b)?(a):(b))

int main()
{
	printf("%f\n",PI);
	printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));
	printf("\n");
return 0;
}
