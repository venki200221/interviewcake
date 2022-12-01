#include<iostream>
#include<stdio.h>

using namespace std;

struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

void create(){
    int i=0;
    int n,num;
    struct node *t,*last;
    cout<<"enter the size of the linked list:"<<endl;
    cin>>n;
    cout<<"Enter the first element:"<<endl;
    cin>>num;
    first=new struct node;
    first->data=num;
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        cout<<"enter the data:"<<endl;
        cin>>num;
        t=new struct node;
        t->data=num;
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void create2(){
       int i,n,num;
 struct node *t,*last;

cin>>n;
cin>>num;
second =new struct node;
second->data=num;
second->next=NULL;
last=second;

for(i=1;i<n;i++){
    cin>>num;
    t=new struct node;
    t->data=num;
    t->next=NULL;
    last->next=t;
    last=t;
}
}



void display(struct node *p){
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
}

void rdisplay(struct node *p){
    if(p){
        cout<<p->data<<endl;
        rdisplay(p->next);
    }
}

int count(struct node *p){
    int x=0;
    while(p){
        x++;
        p=p->next;
    }
    return x;
}

int rcount(struct node *p){
    int x=0;
    if(p==0){
        return x;
    }
    else{
        x=rcount(p->next);
        return x+1;
    }
}

int add(struct node *p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int radd(struct node *p){
    if(p==0){
        return 0;
    }
    return radd(p->next)+p->data;
}

int maxi(struct node *p){
    int high=0;
    while(p){
        if(p->data>high){
            high=p->data;
           
        }
         p=p->next;
    }
}

int rmaxi(struct node *p){
    int x=0;
    if(p==0){
        return 0;
    }
    else{
        x=rmaxi(p->next);
        return x>p->data?x:p->data;
    }
}

struct node *find(struct node *p,int key){
    struct node *q=NULL;
    while(p){
        if(key==p->data){
            return p;
        }
       p= p->next;
    }
    return q;
}

void Insert(struct node *p,int index,int x){
    struct node *t=new node;
    if(index<0 || index>count(p)){
       return;
    }
    else{
        if(index==0){
            t->data=x;
            t->next=first;
            first=t;
        }
        else{
            p=first;
            for(int i=0;i<index-1;i++){
                p=p->next;
            }
            t->data=x;
            t->next=p->next;
            p->next=t;
        }

    }
}

void Sortedinsert(struct node *p,int x){
    struct node *t,*q=NULL;
    t=new struct node ;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=t;
    }
    else{
        while (p && p->data<x){
            q=p;
            p=p->next;
        }

        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
        
    }
}

int Delete(struct node *p,int index){
    struct node *q;
    int x=0;
    if(index==0){
        x=p->data;
        first=first->next;
        delete p;
        return x;
    }
    else{
        q=NULL;
        for(int i=0;i<index-1 && p;i++){
              q=p;
              p=p->next;
        }
        if(p){
            x=p->data;
            q->next=p->next;
            delete p;
            return x;
        }
    }
}

bool sorted(struct node *p){
    int x=-32768;
    while(p!=NULL){
        if(p->data<x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

void remove_duplicates(struct node *p){
    struct node *q=p->next;
    while(q){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
        p->next=q->next;
        delete q;
        q=p->next;
        }
}
}

// reversing a linked list

void reverse1(struct node *p){
    int *arr;
    arr=new int[count(first)];
    p=first;
    int i=0;
    while(p){
        arr[i]=p->data;
        i++;
        p=p->next;
    }
    p=first;
    i--;
    while(p){
        p->data=arr[i];
        i--;
        p=p->next;
    }

}


void reverse2(struct node *p){
    p=first;
    struct node *q,*r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

void reverse3(struct node *q,struct node *p){
    if(p){
        reverse3(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }
}

void concat(struct node *p,struct node *q){
    struct node *r=first;
    while(p->next){
        p=p->next;
    }
    p->next=second;
    second=NULL;
}

void merge(struct node *p,struct node *q){
    struct node *last=NULL;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p){
        last->next=p;
    }
    else{
        last->next=q;
    }
}

int middle(struct node *p){
    struct node *q;
    q=p;
    while(p){
        p=p->next;
        if(p){
            p=p->next;
            q=q->next;
        }
    }
    return q->data;
}

int main(){
     create();
     display(first);
}