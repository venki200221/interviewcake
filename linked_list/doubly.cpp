#include<iostream>
#include<stdio.h>

using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*first=NULL;

void Create(){
    struct node *t,*last;
    first=new struct node;
    int n,num;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;
    cout<<"enter the data:"<<endl;
    cin>>num;
    first->data=num;
    first->next=first->prev=NULL;
    last=first;
    for(int i=0;i<n-1;i++){
        cout<<"Enter the data:"<<endl;
        cin>>num;
        t=new struct node;
        t->data=num;
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
    }
    
}

void display(struct node *p){
    while (p)
    {
       cout<<p->data<<endl;
       p=p->next;
    }
    
}

void Insert(struct node *p,int pos,int x){
    struct node *t;
    struct node *q=NULL;
    if(pos==0){
        t=new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
      t=new node;
      t->data=x;
      t->next=p->next;
      t->prev=p;
      if(p->next){
        p->next->prev=t;
      }
      p->next=t;
    }
}

int Delete(struct node *p,int pos){
    struct node *q;
    q=p;
    int x;
    if(pos==1){
        p=p->next;
        x=q->data;
        delete(q);
    }
    else{
        for(int i=0;i<pos-1;i++){
            q=q->next;
        }
        q->prev->next=q->next;
        if(q->next){
            q->next->prev=q->prev;
        }
        x=q->data;
        delete(q);
    }
    return x;
    
}

void Reverse(struct node *p){
    struct node *temp;
    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p && p->next){
            first=p;
        }
    }
}

int main(){
     Create();
    //  Insert(first,2,45);
     Reverse(first);
     display(first);
     
}











