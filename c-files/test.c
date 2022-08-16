#include <stdio.h>
#include <string.h>
int main()
{
//printing cube root of a number from console
/*int number;
printf("Enther the number:\n");
scanf("%d", &number);
printf("The cube of a number is:%d\n", number*number*number);
*/
char char_array1[20];
char char_array2[20];

printf("Enter the first character: ");
scanf("%s\n", char_array1);

printf("Enter the second character: ");
printf("%s\n", char_array2);

strcpy(char_array2, char_array1);
return 0;
}
