#include <stdio.h>

int main(void){
    int scores[5] = {1,3,3,3,5};
    int index[6] = {0,};
    int max =0;
    int solve =0;
    for (int i=0;i<5;i++){
        index[scores[i]]++;
    }
    for(int i=0;i<6;i++){
        if(max<index[i]){
            max = index[i];
            solve = i;
        }
    }
    printf("최빈값 : %d => %d번 나타남",solve,max);
}