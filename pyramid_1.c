#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,rows,k = 0;

    printf("Enter the number of rows: \n");
    scanf("%d",&rows);


    for(int i=0;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf("---");
        }
        for(k=1;k<=(2*i-1);k++){
            printf(".|.");
        }
        printf("\n");
    }
 return 0;
}
