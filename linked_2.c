#include<stdio.h>
#include<stdlib.h>

struct node {
   int data;
   struct node *next;

};

void addatbeg(struct node **q,int data){
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = data;
  temp->next = *q;
  *q = temp;
}

void display(struct node *q){
   while(q !=NULL){
        printf("%d ",q->data);
    q = q->next;
   }

   printf("\n\n");
}

void delllist(struct node **q,int data){
  struct node *old,*temp;

  temp = *q;
  while(temp !=NULL){
      if(temp->data ==data){
         if(temp ==*q){
            *q = temp->next;
         }else{
            old->next = temp->next;
         }
         free(temp);
         return;
      }else{
          old = temp;
          temp = temp->next;
      }
  }
  printf("No nodes are deleted !");

}

void addafter(struct node *q,int loc,int data){
 struct node *temp,*r;
 temp = q;
    for(int i=1;i<loc;i++){
        temp = temp->next;
        if(temp == NULL){
            printf("Number of nodes are less than provided ! \n");

        }
    }
        r =(struct node *)malloc(sizeof(struct node));
        r->data = data;
        r->next = temp->next;
        temp->next = r;
    }


int main(){
    struct node *p;

    p = NULL;

    addatbeg(&p,56);
    addatbeg(&p,56);
    addatbeg(&p,56);
    addatbeg(&p,56);
    addatbeg(&p,56);
    addatbeg(&p,56);
    addatbeg(&p,56);

    display(p);

    delllist(&p,56);

    display(p);

    addafter(p,4,77);
    display(p);
  return 0;
}
