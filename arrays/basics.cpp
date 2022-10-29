#include<iostream>
#include<stdio.h>

using namespace std;

// increase the size of the array

// int main(){
//     int *p=new int [5];
//       for(int i=0;i<5;i++){
//         p[i]=i;
//         cout<<p[i]<<endl;
//       }
//       int *q=new int [10];
//       for(int i=0;i<5;i++){
//         q[i]=p[i];
//       }
//       delete []p;
//       p=q;
//       q=nullptr;
//       for(int i=0;i<6;i++){
//         cout<<p[i]<<endl;
//       }
// }

// creating 2-D array
// method-1
// int main(){
//     int *a[3];
//     a[0]=new int[3];
//     a[1]=new int[3];
//     a[2]=new int[3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int **a;
//     a=new int *[3];
//     a[0]=new int[3];
//     a[1]=new int [3];
//     a[2]=new int [3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<< " ";
//         }
//         cout<<endl;
//     }
// }

// finding the missing number in a array

// for sorted array
// int main(){
//     int arr[]={1,2,3,5};
//     int sum=0;
//     for(int i=0;i<4;i++){
//         sum+=arr[i];
        
//     }
//     int s=(5*6)/2;
//         cout<<"the missing number is:"<<s-sum<<endl;
// }

// for finding multiple missing elements

// int main(){
//     int arr[]={6,7,9,10,11,12,13,15,17};
//     int l=6;
//     int h=17;
//     int dif=l-0;
//     for(int i=0;i<9;i++){
//         if(arr[i]-i !=dif){
//             cout<<"the missing number is:"<<i+l;
//             break;
//         }
//     }
// }

// int main(){
//     int arr[]={6,9,10,11,12,13,17};
//     int l=6,h=17;
//     int dif=l-0;
//     for(int i=0;i<9;i++){
//         if(arr[i]-i!=dif){
//             while(dif<arr[i]-i){
//               cout<<"the missing numbers are:"<<dif+i<<endl;
//                dif++;
//             }
//         }
//     }
// }

// int main(){
//     int arr[]={3,2,5,4,6,1,9,10,12};
//     int l=1;int h=12;
//     int hash[13]={0};
//     for(int i=0;i<13;i++){
//         hash[arr[i]]++;
//     }
//     cout<<"The missing elements are:"<<endl;
//     for(int i=l;i<h;i++){
//         if(hash[i]==0){
//             cout<<i<<endl;
//         }
//     }
// }

// finding the reapeted number
// int main(){
//     int arr[]={1,2,2,3,4,5,6,6,6,6,7,8};
//     int j=0;
//     for(int i=0;i<11;i++){
//         if(arr[i]==arr[i+1]){
//             j=j+1;
//             while(arr[i]==arr[j])
//             {
//                 j++;
//             }
//         cout<<arr[i]<<"is repeated for:"<<j-i<<"times"<<endl;
//         i=j-1;
//         }
//     }
// }

// int main()
// {
//     int arr[]={1,2,2,3,4,5,6,6,6,6,7,8};
//     int l=1,h=8;
//     int hash[9]={};
//     for(int i=l;i<12;i++){
//         hash[arr[i]]++;
//     }
//     cout<<"The missing elements are:"<<endl;
//    for(int i=l;i<h;i++){
//        if(hash[i]>1){
//         cout<<i<<"is repeated for"<< hash[i]<<"times"<<endl;
//        }
//    }
// }


// unsorted array
// finding duplicates
// int main(){
//     int arr[]={8,3,6,4,5,8,7,6,9,7};
//     int j=0;
//     int count=1;
//     for(int i=0;i<8;i++){
//         count=1;
//         if(arr[i]!=-1){
//           for(int j=i+1;j<9;j++){
//               if(arr[i]==arr[j]){
//                 count++;
//                 arr[j]=-1;
//               } 
//           }
//           if(count>1){
//             cout<<arr[i]<<" is repeted for "<<count<<"times"<<endl;
//           }
//         }
//     }
// }

// using hash table
// int main()
// {
//     int arr[]={8,3,6,4,5,8,7,6,9,7};
//     int hash[9]={0};
//     for(int i=0;i<10;i++){
//             hash[arr[i]]++;
//     }
//     for(int i=0;i<9;i++){
//         if(hash[i]>1){
//             cout<<i<<"is repeated for"<<hash[i]<<"times"<<endl;
//         }
//     }
// }


// finding the pairs tht sum up
// for unsorted array

// int main()
// {
//     int arr[]={6,3,8,10,16,7,2,9,14};
//     for(int i=0;i<8;i++){
//         for(int j=i+1;j<9;j++){
//             if(arr[i]+arr[j]==10){
//               cout<<arr[i]<<"+"<<arr[j]<<"= 10"<<endl;
//             }
//         }
//     }
// }

// using hash table

// int main(){
// int arr[]={6,3,8,10,16,7,2,9,14};
// int hash[10]={0};
// for(int i=0;i<9;i++){
//         hash[arr[i]]++;
    
// }
// for(int i=0;i<9;i++){
//     if(hash[10-arr[i]]!=0){
//         cout<<arr[i]<<"+"<<10-arr[i]<<"=10"<<endl;
//     }
// }

// return 0;

// }

// for sorted array

int main(){
    int arr[]={1,3,4,5,6,8,9,10,12,14};
    int i=0,j=9;
    while(i<j){
        if(arr[i]+arr[j]==10){
        cout<<arr[i]<<"+"<<arr[j]<<"= 10"<<endl;
         i++;j--; 
        }
        else if(arr[i]+arr[j]<10){
            i++;
        }
        else{
            j--;
        }
    }
 
}