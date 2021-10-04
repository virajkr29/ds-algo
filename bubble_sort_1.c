#include <stdio.h>
#include<stdlib.h>

void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;

}


int main(){

    int arr[5] = {8,8,3,5,4};
    int flag;

    for(int i=0;i<5-1;i++){
               flag=0;
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
        swap(&arr[j],&arr[j+1]);
        flag=1;
            }

        }
        if(flag==0)
            break;
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }



}
