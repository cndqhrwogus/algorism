#include <stdio.h>
#include <stdbool.h>
//이진 검색은 정렬이 이미 되어있다고 가정하고 사용해야한다.
int main(void){
    int data[] = {1,3,5,7,9};
    int search = 7;
    bool flag = false;
    int index = -1;
    int count = sizeof(data)/sizeof(int);
    int high = count - 1;
    int low = 0;
    while(low<=high){
        int mid = (high+low)/2;
        if(data[mid]==search){
            index = mid; 
            flag = true;
            break;
        }
        if(data[mid]>search){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    if(flag == true){
        printf("%d을 %d 위치에서 찾았습니다.",search,index);
    }
    else{
        printf("%d을 찾지 못하였습니다",search);
    }

    return 0;
}