#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
#include<map>

using namespace std;

// Problem -1
// Bulbs
// O(n^2)

// int bulbs(int *A,int n1){
//     int cost=0;
//     for(int i=0;i<n1;i++){
//         if(A[i]==0){
//             cost++;
//             for(int j=i;j<n1;j++){
//                 if(A[j]==0){
//                     A[j]=1;
//                 }
//                 else{
//                     A[j]=0;
//                 }
//             }
//         }
//         else{
//             continue;
//         }
//     }
//     return cost;
// }

// int bulbs1(int *A,int n1)
// {
//     int cost=0;
//     for(int i=0;i<n1;i++){
//     if(cost%2==0){
//         if(A[i]==0){
//             A[i]=0;
//         }
//         else{
//             A[i]=1;
//         }
//     }
//     else{
//         if(A[i]==0){
//             A[i]=1;
//         }
//         else{
//             A[i]=0;
//         }
//     }
//     if(A[i]==1){
//         continue;
//     }
//     else{
//         cost++;
//     }
//     }
//     return cost;
// }
// int main(){
// int A[]={ 0 ,1 ,0 ,1};
// cout<<bulbs1(A,4)<<endl;
// }

// Highest product of 3
// Problem-2
// int highest(vector<int>&A){
// sort(A.begin(),A.end());
// int n=A.size();
// int high3=A[n-1]*A[n-2]*A[n-3];
// int low2hig1=A[1]*A[0]*A[n-1];
// return max(high3,low2hig1);
// }

// int main()
// {
//     vector <int>A={1,2,3,4};
//     cout<<highest(A)<<endl;
// }


// problem -3
// maximum number of disjoint sets
// bool compare( vector<int> &a , vector<int> &b)
// {
//     return a[1]<b[1];
// }

// int solve(vector<vector<int> > &A)
// {
//     sort(A.begin(),A.end(),compare);
//     int n=A.size();
//     int count=1;
//      int temp=A[0][1];
//     for(int i=1;i<A.size();i++){
//         if(temp<A[i][0]){
//             count++;
//             temp=A[i][1];
//         }
//     }
//     return count;
// }


// problem-4
// maximum permutation

// vector<int> solve(vector<int>&A,int B){
//    int i, j, min_idx;
 
   
//     for (i = 0; i <B; i++)
//     {
        
//         min_idx = i;
//         for (j = i+1; j < A.size(); j++)
//         if (A[j] > A[min_idx]){
//             min_idx = j;
//         }

 
       
//         if(min_idx!=i)
//             swap(A[min_idx], A[i]);
//     }
//     return A; 
         
    
// }

// int main(){
//     vector<int>A,c;
//     A={3, 2, 4, 1, 5};
//     int B=3;
//     c=solve(A,B);
//     for(auto v:c){
//         cout<<v<<endl;
//     }
// }


