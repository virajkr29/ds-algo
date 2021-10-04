#include<stdio.h>
#include<stdlib.h>

struct node {
   int data;
   struct node *link;
};
void add(struct node **q,int num){
    struct node *r,*temp = *q;

    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;

    if(*q==NULL || (*q)->data >num){
        *q = r;
        (*q)->link = temp;
    }else{
       while(temp !=NULL){
        if(temp->data <= num && (temp->link== NULL || temp->link->data >num)){
            r->link = temp->link;
            temp->link = r;
            return ;
        }
        temp = temp->link;
       }

    }
}

void display(struct node *q){
  while (q !=NULL){
    printf("%d ",q->data);
    q = q->link;
  }
}
int main(){
    struct node *p;
    p=NULL;

    add(&p,23);
    add(&p,56);
    add(&p,78);
    add(&p,12);

    display(p);


}
