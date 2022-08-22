#include<stdio.h>
#include<string.h>

int main(){

    char arr[1000];

    int length;
    printf("Input : ");
    scanf("%s",arr);

    length = strlen(arr);
    printf("Output : ");
    for(int j = length - 1; j>=0 ; j--){
        for(int i = j; i >= 0; i--){
            printf("%c",arr[i]);
        }
        printf("\n\t ");
    }
    return 0;
}