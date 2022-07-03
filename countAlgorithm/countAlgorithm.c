#include <stdio.h>

//개수 알고리즘(Count Algorithm): 주어진 범위에 주어진 조건에 해당하는 자료들의 개수
//1부터 1,000까지의 정수 중 13의 배수의 개수(건수, 횟수)
main(){
    int count = 0;

    for(int i=0;i<=1000;i+=13){
        count++;
    }
    printf("1부터 1,000까지의 정수 중 13의 배수의 개수:%d\n",count-1);
}