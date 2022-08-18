#include<stdio.h>
#include<stdlib.h>

int main (){
    
    int num,roll_col;
    scanf("%d",&num);
    roll_col = num - 1;

    for(int i = -roll_col ; i <= roll_col ; i++){
        for(int j = -roll_col ; j <= roll_col ; j++){
            if(abs(j) > abs(i)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}