
#include <stdio.h>
//n명의 국어 점수 중에서 80점 이상인 점수의 합계
//합계 알고리즘: 주어진 범위에 주어진 조건에 해당하는 자료들의 합계
main(){
    //[0] Initialize
    int sum = 0;
    //[1] input: 입력
    int scores[] = {100, 75, 50, 37, 90, 95};
    int N = sizeof(scores) / sizeof(int);
    //[2] process: 처리
    for(int i=0; i < N;i++){
        if(scores[i]>=80){
            sum += scores[i];
        }

}
//[3] output: 출력
    printf("%d명의 점수 중 80점 이상의 총점:%d\n",N,sum);
}