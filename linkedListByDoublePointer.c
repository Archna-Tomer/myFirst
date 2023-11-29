#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;

};
struct node * getNode(){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;
}

void insBeg(struct node **list,int x){
    struct node* n;
    n=getNode();
    n->info=x;
   n->next=*list;
   *list=n;
}

void insEnd(struct node **list,int x){
    struct node *p,*n;
    p=*list;
   
    while(p->next!=NULL){
        p=p->next;
    }
     n=getNode();
     n->info=x;
     p->next=n;
     n->next=NULL;
     printf("\n");
}

void insPos(struct node **list,int pos,int x){
    struct node *p,*n;
    p=*list;
    n=getNode();

    int curr_pos=0;
    while(curr_pos!=pos-1){
        p=p->next;
        curr_pos++;
    }
    n->info=x;
    n->next=p->next;
    p->next=n;
    printf("\n");

}

void delBeg(struct node **list){
    struct node *p,*q;
    p=*list;
    q=p->next;
    *list=q;
    free(p);
    printf("\n");

}

void delEnd(struct node **list){
    struct node *p,*q;
    p=*list;
    while(p->next->next!=NULL){
        p=p->next;
    }
    q=p->next;
    p->next=NULL;
    free(q);
    printf("\n");
}


void delPos(struct node **list,int pos){
    struct node *p,*q;
    p=*list;
    int curr_pos=0;
    while(curr_pos!=pos-1){
        p=p->next;
        curr_pos++;
    }
    q=p->next;
    p->next=p->next->next;
    free(q);
    printf("\n");


}
void display(struct node *list){
    struct node *p;
    p=list;
    while(p!=NULL){
        printf("%d ->",p->info);
        p=p->next;
    }
    printf("NULL");
}
int main(){
    struct node *start;
    start=NULL;
    insBeg(&start,5);
    insBeg(&start,4);
    insBeg(&start,3);
    insBeg(&start,2);
    insBeg(&start,1);
    display(start); 

    insEnd(&start,7);
    insEnd(&start,8);
    display(start);

    insPos(&start,3,100);
    insPos(&start,4,200);
    display(start);



    return 0;
}