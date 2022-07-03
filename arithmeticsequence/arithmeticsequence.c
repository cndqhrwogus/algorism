#include <stdio.h>
// 1부터 20까지의 정수 중 홀수의 합을 구하는 프로그램
//등차수열(Arithmetic Sequence): 연속하는 두 순의 차이가 일정한 수열

main(){
    //[1] Input
    int sum = 0;
    //[2] Process
    for(int i = 1; i<=20;i++){
        if(i%2==1){
            sum += i;
            printf("%d ",i);
        }
    }
    //[3] Output
    printf("\n1부터 20까지의 홀수의 합은 %d 입니다",sum);
}