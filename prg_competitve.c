#include<stdio.h>
#include<stdlib.h>

int main(){
int l_bound;
int u_bound;
      scanf("%d %d",&l_bound,&u_bound);

      for(int i=l_bound;i<=u_bound;i++){
        if(i%5==0 && i%3==0){
            printf("FizzBuzz \n");
        }else if(i%3==0){
            printf("Fizz \n");
        }else if(i%5==0){
            printf("Buzz \n");
        }
        else{
            printf("%d \n",i);
        }
      }
  return 0;
}
