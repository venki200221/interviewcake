#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;


// trees
// n=2^h-1
// log(n+1)=h

struct node{
int data;
struct node *lchild;
struct node *rchild;
}*root=NULL;

void insert(struct node *t,int key){
    struct node *p,*r;
    if(root==NULL){
        p=new node;
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t){
        r=t;
        if(t->data==key){
            return;
        }
        else if(key<t->data){
            t=t->lchild;
        }
        else{
            t=t->rchild;
        }
    }
    p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(r->data<key){
        r->rchild=p;
    }
    else{
        r->lchild=p;
    }

}

void inorder(struct node *p){
    if(p){
        inorder(p->lchild);
        cout<<p->data<<endl;
        inorder(p->rchild);
    }
}

struct node *rinsert(struct node *p,int key){
    struct node *t=NULL;
    if(p==NULL){
        t=new node;
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key <p->data){
        p->lchild=rinsert(p->lchild,key);
    }
    else if(key >p->data){
        p->rchild=rinsert(p->rchild,key);
    }
    return p;
}

struct node *search(int key){
    struct node *t=root;
    while(t){
        if(key==t->data){
            return t;
        }
        else if(key<t->data){
          t=t->lchild;
        }
        else{
            t=t->rchild;
        }
    }
    return NULL;
}

int Height(struct node *p){
    int x,y;
    if(!p){
        return 0;
    }
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}

struct node *Inpre(struct node *p){
    while(p && p->rchild){
        p=p->rchild;
    }
    return p;
}

struct node *Insuc(struct node *p){
    while(p && p->lchild){
        p=p->lchild;
    }
    return p;
}

struct node *Delete(struct node *p,int key){
    if(p==NULL){
        return NULL;
    }
    if(p->lchild == NULL && p->rchild ==NULL){
        if(p==root){
            root=NULL;
        }
        free(p);
        return NULL;
    }

    struct node *q;
    if(key<p->data){
        p->lchild=Delete(p->lchild,key);
    }
    else if(key>p->data){
        p->rchild=Delete(p->rchild,key);
    }
    else{
        if(Height(p->lchild)>Height(p->rchild)){
            q=Inpre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }
        else{
            q=Insuc(p->lchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
    }
return p;
}

int main(){
// insert(root,10);
// insert(root,1);
// insert(root,1);
// insert(root,20);
// insert(root,50);
// insert(root,7);
// insert(root,6);

 root = rinsert(root, 5);
    rinsert(root, 10);
    rinsert(root, 20);
    rinsert(root, 25);
    cout<<"Height of the tree is:"<<Height(root)<<endl;
    inorder(root);



}