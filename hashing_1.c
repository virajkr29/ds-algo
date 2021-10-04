#include<stdio.h>
#include<stdlib.h>

int hash_arr[10];

int hash_function(int num){
   int hash,value;
   hash = num%10;
   return hash;
}

void hash(int arr[10]){
   for(int i=0;i<10;i++){
    hash_arr[i]=0;
   }

   for(int i=0;i<10;i++){
      hash_arr[i]=hash_function(arr[i]);
   }

   printf("Hash Values Gnerated: \n");
   for(int i=0;i<10;i++){
    printf("%d ",hash_arr[i]);
   }
   printf("\n\n");


}

void hash_table(int arr[10]){
   printf("Following is the hash table generated:");
   hash(arr);

   for(int i=0;i<10;i++){
    printf("%d -- %d",arr[i],hash_arr[i]);
    printf("\n");
   }
}

void hash_search(int key,int arr[10]){
   for(int i=0;i<10;i++){
    if(hash_arr[i]==key){
            int arr_value;
       if((arr[i]%10)==key){
        printf("Key %d corresponds to %d \n",hash_arr[i],arr[i]);
       }

    }
   }
}

int main(){
    int num[10]={23,45,12,67,89,34,12,88,32,76};
     hash_table(num);
     hash_search(3,num);
     hash_search(2,num);


   return 0;
}
