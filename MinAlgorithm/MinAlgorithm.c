#include <stdio.h>

int main(void){
    int num[5] = {2,5,3,7,1};
    int min = num[0];
    for(int i =0;i<5;i++){
        if(min>num[i] && num[i]%2 ==0){
            min = num[i];
        }
    }
    printf("주어진 수 중에 제일 작은 값은 %d 입니다",min);
    return 0;
}