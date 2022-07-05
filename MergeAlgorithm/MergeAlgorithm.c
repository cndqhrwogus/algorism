#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
//오름차순으로 정렬되어 있다고 가정
int main(void){
    int first[] = {1,3,5};
    int second[] = {2,4};
    int M = sizeof(first)/sizeof(int);
    int N = sizeof(second)/sizeof(int);
    int *solve = malloc(sizeof(M+N)*sizeof(int));
    int i =0;int j=0; int k=0;
    while(i<M && j<N){
        if(first[i]>second[j]){
            solve[k++] = second[j++];
        }
        else if(first[i]<second[j]){
            solve[k++] = first[i++];
            
        }
    }
    while(i<M){
        solve[k++] = first[i++];
    }
    while(j<N){
        solve[k++] = second[j++];
    }
    

    for(int i=0;i<M+N;i++){
        printf("%d ",solve[i]);
    }
    free(solve);
}