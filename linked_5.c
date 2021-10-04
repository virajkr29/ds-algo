#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *link;
};

void add(struct node **q,int data){
   struct node *r,*temp = *q;

   r = (struct node *)malloc(sizeof(struct node));
   r->data = data;

   if(*q==NULL || (*q)->data > data){
        *q = r;
   (*q)->link = temp;

   }else{
      while(temp !=NULL){
        if(temp->data <=data &&(temp->link == NULL || temp->link->data >data)){
            r->link = temp->link;
            temp->link = r;
            return;
        }
        temp = temp->link;
      }
   }
}

void display(struct node *q){
  while(q !=NULL){
    printf("%d ",q->data);
    q = q->link;
  }

}

int main(){
    struct node *p;
    p  =NULL;

    add(&p,45);
    add(&p,67);
    add(&p,12);
    display(p);


}
