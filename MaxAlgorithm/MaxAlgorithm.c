#include <stdio.h>

int main(void){
int max = 0;
int numbers[5] = {-2,-5,-3,-7,-1};
for(int i=0;i<5;i++){
    max = numbers[0];
    if(numbers[i]>max){
        max = numbers[i];
    }
}
printf("주어진 수 중에서 가장 큰 값은 %d 입니다.",max);
}