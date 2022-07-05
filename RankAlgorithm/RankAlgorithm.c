#include <stdio.h>

int main(void){
    int scores[5] = {90,87,100,95,80};
    int value[5] = {0,};
    int count = 0;
    for(int i =0;i<5;i++){
        for(int l=0;l<5;l++){
            if(scores[l]>scores[i]){
                count ++;
            }
        }
        value[i] = count + 1;
        count = 0;
    }
    for(int i =0;i<5;i++){
        printf("%d ",value[i]);
    }
    return 0;
}