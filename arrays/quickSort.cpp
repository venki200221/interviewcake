#include<iostream>
#include<stdio.h>

using namespace std;

void Swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;

    do{
        do{i++;}while(A[i]<=pivot);  //finds the element greater than pivot
        do{j--;}while(A[j]>pivot);   //finds the element lesser than pivot

        if(i<j){
            Swap(A[i],A[j]);
        }
    } while(i<j);

    Swap(A[l],A[j]);
    return j;
}

void QuickSort(int A[],int l,int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

int main(){
  int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;  
 QuickSort(A,0,n);
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0; 
}