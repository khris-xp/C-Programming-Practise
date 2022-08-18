#include<stdio.h>
int main() {
    int num,roll_col;
    scanf("%d",&num);
    roll_col = num - 1;
    printf("\n");
    for(int i = 0 ; i <= roll_col ; i++){
        for(int j = 0 ; j <= roll_col ; j++){
            if(i == 0 || i == roll_col || j == 0 || j == roll_col){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}