#include<stdio.h>
#include<string.h>

int main(){

    char arr[1000];
    int sum,length;

    scanf("%s",arr);
    length = strlen(arr);
    sum = 0;

    for(int i = 0 ; i < length ; i++){
        if(arr[i] <= '9' && arr[i] >= '0'){
            sum = sum * 10 + (arr[i] - '0');
        }else if (arr[i] >= 'A'){
            if(sum == 0){
                printf("%c",arr[i]);
            }else{
                for(int j = 0; j < sum ; j++){
                    printf("%c",arr[i]);
                }
                sum = 0;
            }
        }
    }
    return 0;
}