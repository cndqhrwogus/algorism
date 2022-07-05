#include <stdio.h>
int main(void){
    int data[5] = {3,2,1,5,4};
    int value = 0;
    
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
        if(data[i]>data[j]){
            value = data[i];
            data[i] =data[j];
            data[j] = value;
        }        
        }
    }
    for(int i =0;i<5;i++){
        printf("%d\t",data[i]);
    }
    return 0;
}