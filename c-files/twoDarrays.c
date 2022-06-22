#include<stdio.h>
int main()
{
/*2D arrays declarations*/
int disp[2][3];
/*counter valiables for the loop*/
int i, j; 
for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
        printf("Enter the value for disp[%d][%d]:", i,j);
        scanf("%d", &disp[i][j]);
    }
}
//Display the array elements
printf("Two dimensional arrays elements:\n");
for (i = 0; i < 2; i++){
    for (j = 0; j < 3; j++){
        printf("%d", disp[i][j]);
        if(j==2){
            printf("\n");
        }
    }
}

    return 0; 
}