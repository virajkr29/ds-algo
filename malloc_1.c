#include<stdio.h>
#include<stdlib.h>

int main(){
   int *p,n;
   p =(int *)malloc(sizeof(int)*n);
   printf("Enter n:\n");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
    printf("Enter value: \n");
    scanf("%d",p+i);
   }
   for(int i=0;i<n;i++){
    printf("%d ",*(p+i));
   }
  n++;
  for(int i=0;i<n;i++){
    printf("Enter value: \n");
    scanf("%d",p+i);
   }



}




