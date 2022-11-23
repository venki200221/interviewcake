#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
}*root=NULL;

void insert(struct node *t,int key){
    struct node *p,*r=NULL;
    if(root==NULL){
        p=new node;
        p->data=key;
        p->lchild=NULL;
        p->rchild=NULL;
        root=p;
        return;
    }
    while(t){
        r=t;
        if(t->data==key){
            return;
        }
        else if(key>t->data){
            t=t->rchild;
        }
        else{
            t=t->lchild;
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

int second_largest(struct node *p){
    struct node *r;
    while(p->rchild){
        r=p;
        p=p->rchild;
    }
    return r->data;

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

int minValue(struct node *p){
   if(!p){
    return INT16_MAX;
   }
   int value=p->data;
   int leftMin=minValue(p->lchild);
   int rightMin=minValue(p->rchild);

   return min(value,min(leftMin,rightMin));
}

int maxValue(struct node *p){
    if(!p){
       return INT16_MIN;
    }
    int value=p->data;
    int leftMax=maxValue(p->lchild);
    int rightMax=maxValue(p->rchild);
    return max(value,max(leftMax,rightMax));
    
}



bool isBST(struct node *p){
   if(!p){
       return 1;
   }
   if(p->lchild != NULL && maxValue(p->lchild)>p->data){
    return 0;
   }
   if(p->rchild != NULL && minValue(p->rchild)<p->data){
    return 0;
   }
   if(!isBST(p->lchild) || !isBST(p->rchild)){
    return 0;
   }
   return 1;
}

// Diameter-longest path between any two 
int Diameter(struct node *p){
if(p==NULL){
    return 0;
}
int left=Diameter(p->lchild);
int right=Diameter(p->rchild);
int both=Height(p->lchild)+Height(p->rchild)+1;
int ans=max(both,max(left,right));
return ans;
}

// check wetther the tree is balanced or not

bool isBalanced(struct node *p){
    if(p==NULL){
        return true;
    }
    bool left=isBalanced(p->lchild);
    bool right=isBalanced(p->rchild);
    bool diff=abs(left-right)<1;
    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }

}

// identical trees
bool isIdentical(struct node *p,struct node *q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p!=NULL && q==NULL){
        return false;
    }
    if(p==NULL && q!=NULL){
        return false;
    }
    bool left=isIdentical(p->lchild,q->lchild);
    bool right=isIdentical(p->rchild,q->rchild);
    bool value=p->data==q->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }



}

int SumLeft(struct node *p,bool isleft,int *sum){
    if(!root)
    return;
    if(!root->lchild && !root->rchild && isleft){
        *sum+=p->data;
    }
    SumLeft(root->lchild,1,sum);
    SumLeft(root->rchild,0,sum);
    return *sum;
}

int main(){
int sum=0;
insert(root,10);
insert(root,1);
insert(root,20);
insert(root,50);
insert(root,7);
insert(root,6);

inorder(root);

cout<<"balanced tree:"<<Height(root->lchild)-Height(root->rchild)<<endl;
cout<<"min value:"<<minValue(root)<<endl;
cout<<"max Value:"<<maxValue(root)<<endl;
cout<<boolalpha<<isBST(root)<<endl;
cout<<"second largest value:"<<second_largest(root)<<endl;

cout<<Diameter(root)<<endl;
cout<<isBalanced(root->rchild)<<endl;
cout<<SumLeft(root,0,&sum)<<endl;
}