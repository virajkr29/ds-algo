#include<stdio.h>
#include<stdlib.h>

int main(){
   int n,m;
   n = 3*m;
   printf("Enter the value of m");
   while(m%2 !=1){
    scanf("%d",&m);
   if(m%2==0){
    printf("Enter a valid number!");
   }
for(int i=0;i<n;i++){
            printf(".");
        for(int j=0;j<m;j++){}
        printf(".|.");
    }
   }
   return 0;
}
