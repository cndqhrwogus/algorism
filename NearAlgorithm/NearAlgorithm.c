#include <stdio.h>
#include <math.h>
// 원본 데이터 중에서 대상 데이터와 가장 가까운 값
int main(void){
    int num[5] = {10,20,30,27,17};
    int target = 25;
    int value = abs(target - num[0]);
    int solve = 0;
    for(int i=0;i<5;i++){
        if(abs(target-num[i])<value){
            solve = num[i];
            value = abs(target-num[i]);
        }
    }
    printf("타켓과 가장 근삿값은 %d 입니다.",solve);
}