#include<stdio.h>
#include<stdlib.h>

int main() {

    int num,roll_col;
    scanf("%d",&num);

    roll_col = num - 1;

    for(int i = 0 ; i <= roll_col ; i++){
        for(int j = -roll_col ; j <= roll_col ; j++){
            if(abs(i) < abs(j)){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}