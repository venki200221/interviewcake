#include<iostream>
#include<stdio.h>

using namespace std;
struct  node{
    int data;
    struct node *next;
}*Head=NULL;

void Create(){
    struct node *t,*last;
    int num,n;
    printf("Enter the number of nodes:");
    cin>>n;
    printf("Enter the data:");
    cin>>num;
    Head=new struct node;
    Head->data=num;
    Head->next=Head;
    last=Head;
    for(int i=0;i<n-1;i++){
        t=new struct  node;
        printf("Enter the data:");
        cin>>num;
        t->data=num;
        t->next=last->next;
        last->next=t;
        last=t;
    }
    last=Head;
}

void display(struct node *h){
   do{
    cout<<h->data<<endl;
    h=h->next;
   }while(h!=Head);
}

void insert(struct node *p,int pos,int x){
    struct node *t;
    
    if(pos==0){
       
        if(Head==NULL){
            Head=t;
            Head->next=Head;
        }
        else{
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=t;
            t->next=Head;
            Head=t;
        }
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

int main(){
Create();
insert(Head,2,100);
display(Head);
}