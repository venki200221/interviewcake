#include<iostream>
#include<stdio.h>

using namespace std;

void Swap(int &a,int &b){
    int temp=b;
    b=a;
    a=temp;
}

void selection(int arr[],int n){
    int min=0;
    for(int i=0;i<n-1;i++){
      for(int j=min=i;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
      }
      Swap(arr[i],arr[min]);
    }
}

int main(){
    int arr[]={1,5,3,8};
    selection(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
}

