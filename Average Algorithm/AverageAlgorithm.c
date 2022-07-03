#include <stdio.h>
//평균 알고리즘(Average Algorithm):주어진 범위에 주어진 조건에 해당하는 자료들의 평균
// n명의 점수 중에서 80점 이상 95점 이하의 점수의 평균
main(){
    int data[5] = {90,65,78,50,95};
    int sum =0;
    int count = 0;
    double avg = 0;
    for(int i=0;i<5;i++){
        if(80<=data[i] && data[i]<=95){
            sum += data[i];
            count ++;
        }
    }
    avg = (double)sum/count;
    printf("80점 이상 95점 이하의 자료의 평균:%.2f\n",avg);
}