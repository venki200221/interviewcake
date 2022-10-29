#include<iostream>
#include<stdio.h>

using namespace std;

void Merge(int A[],int l,int mid,int h){
    int i,j,k;
    i=l;
    j=mid+1;
    k=l;
    int b[40];
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            b[k++]=A[i++];
        }
        else{
            b[k++]=A[j++];
        }
    }
    for(;i<=mid;i++){
        b[k++]=A[i];
    }
    for(;j<=h;j++){
        b[k++]=A[j];
    }
    for(int i=l;i<=h;i++){
        A[i]=b[i];
    }
}

void mergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}


int main(){
int A[]={10,2,5,20,7};
mergeSort(A,0,4);
for(int i=0;i<4;i++){
    cout<<A[i]<<endl;
}
}