#include<iostream>
#include<stdio.h>

using namespace std;

struct Array{
    int a[20];
    int size{};
    int length{};
}arr;

void display(struct Array arr){
    cout<<"the elements of the array are:"<<endl;
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<endl;
    }
}

void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->a[arr->length++]=x;
    }
}

void insert(struct Array *arr,int index,int element){
    int temp=arr->a[arr->length];
    if(index>=0 && index<=arr->length){
        for(int i=arr->length;i>index;i--){
            arr->a[i]=arr->a[i-1];
        }
    }
    arr->a[index]=element;
    arr->length++;
    arr->a[arr->length]=temp;
}


void Delete(struct Array *arr,int index){
    int x=arr->a[index];
    if(index>=0 && index<=arr->length){
        for(int i=index;i<arr->length;i++){
            arr->a[i]=arr->a[i+1];
        }
        arr->length--;
        cout<<"The deleted element is:"<<x<<endl;
    }
}

int linear(struct Array arr,int key){
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]==key){
            return i;
        }
    }
    return -1;
}

void Swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}


int mod_linear(struct Array *arr,int key){
     for(int i=0;i<arr->length;i++){
        if(arr->a[i]==key){
            Swap(&arr->a[i],&arr->a[0]);
            return i;
        }
     }
     return -1;
}

int binary(struct Array arr,int key){
    int low=0,high=arr.length-1,mid=(low+high)/2;
    while(low<=high){
        mid=(low+high)/2;
        if(arr.a[mid]==key){
            return mid;
        }
        else if(key<arr.a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

void reverse(struct Array *arr){
    for(int i=0,j=arr->length;i<j;i++,j--){
        Swap(&arr->a[i],&arr->a[j]);        
    }
}

void insertSort(struct Array *arr,int x){
    int i=arr->length-1;
    while(i>=0 && arr->a[i]>x){
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;
}

void is_sorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.a[i]>arr.a[i+1]){
            cout<<"Array is not sorted"<<endl;
             break;
        }

    }
    cout<<"Array is sorted"<<endl;
}

struct Array *merge(struct Array *arr1,struct Array *arr2){
   struct Array *arr3;
   arr3=new struct Array[arr1->length+arr2->length];
   int i=0,j=0,k=0;
   while(i<arr1->length && j<arr2->length){
    cout<<"hi";
    if(arr1->a[i]<arr2->a[k]){
        arr3->a[k]=arr1->a[i];
        i++;k++;
    }
    else{
        arr3->a[k]=arr2->a[j];
        k++;j++;
    }
   }
   for(;i<arr1->length;i++){
     arr3->a[k]=arr1->a[i];
     k++;
   }
   for(;j<arr2->length;j++){
     arr3->a[k]=arr1->a[j];
     k++;
   }
   return arr3;
}



int main(){
    // struct Array arr={{1,2,3,5,7},20,5};
    // append(&arr,6);
    // insert(&arr,2,10);
    // Delete(&arr,1);
    // cout<<mod_linear(&arr,5)<<endl;
    // cout<<binary(arr,5);
    // reverse(&arr);
    // display(arr);
    struct Array arr1={{1,3,5,7,9},10,5};
    struct Array arr2={{2,4,6,8,10},10,5};
    struct Array *arr3;
    arr3=merge(&arr1,&arr2);
    display(*arr3);
}