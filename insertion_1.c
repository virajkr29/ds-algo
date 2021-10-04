#include<stdio.h>
#include<stdlib.h>

int main(){
   int arr[5]= {44,56,12,78,52};

   for(int i=1;i<5;i++){
    int x = arr[i];
    int j = i-1;
    while(x<arr[j] && j>=0){
        arr[j+1] = arr[j];
        --j;
    }
    arr[j+1] = x;
   }

   for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
   }


}
