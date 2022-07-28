#include <stdio.h>
int max(int num1, int num2);

int main()
//local variables declaration
{
	int a = 100;
	int b = 200;
	int res;
//function call
	res = max(a, b);
	printf("The maximum value is: %d\n", res);
	return 0;
}
//function returning the mux number btn the two

int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}

