#include<stdio.h>

int main() {

    int num,roll_col;

    scanf("%d",&roll_col);

    for(int i = 1; i <= roll_col ; i++){
        for(int j = 1; j <= roll_col; j++){
            if(i%2 == 1){
                if(j%2 == 0){
                    printf(" ");
                }else{
                    printf("*");
                }
            }else if(i%2 == 0){
                if(j%2 == 0){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}