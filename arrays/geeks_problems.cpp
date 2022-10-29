#include <iostream>
#include <stdio.h>
#include <algorithm>
#include<math.h>
using namespace std;

// 1 Pick points from array such that minimum distance is maximized
// Given C magnets and an array arr[] representing N index positions where C ≤ N. The task is to place these magnets at these available indices in such a way that the distance between the two nearest magnets is as large as possible.

// bool isPossible(int arr[],int n,int c,int mid){
//     int magnet=1;
//     int curr_pos=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]-curr_pos>=mid){
//             magnet++;
//             curr_pos=arr[i];
//             if(magnet==c){
//                 return true;
//             }
//         }
//     }
//    return false;
// }

// int binarySearch(int n,int C, int arr[]){
//     int l,h,ans,mid;
//     l=0;
//     h=arr[n-1];
//         sort(arr,arr+n);

//     mid=(l+h)/2;
//     ans=0;
//     while(l<h){
//         mid=(l+h)/2;
//         if(!isPossible(arr,n,C,mid)){
//             h=mid-1;
//         }
//         else{
//             ans=max(mid,ans);
//             l=mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//  int C = 4;
//     int arr[] = { 1, 2, 5, 8, 10, 18 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << binarySearch(n, C, arr) << endl;

//     return 0;
// }

// 2-Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[]. The array might also contain duplicates. You may assume that both x and y are different and present in arr[].
// int min_dist(int arr[],int n,int x,int y){
//     int mini=INT_MAX;
//     // cout<<mini<<endl;
//         for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//         if (x==arr[i] && y==arr[j] || x==arr[j] && y==arr[i]){
//              if(mini>abs(i-j)){
//                 mini=abs(i-j);
//              }
//         }
//        }
//     }
//     return mini;
// }

// int main(){
// int arr[] = { 3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 3;
//     int y = 6;

//     cout << "Minimum distance between " << x << " and " << y
//          << " is " << min_dist(arr, n, x, y) << endl;
// }

// 3-Minimize the maximum difference between the heights
// Given the heights of N towers and a value of K, Either increase or decrease the height of every tower by K (only once) where K > 0. After modifications, the task is to minimize the difference between the heights of the longest and the shortest tower and output its difference.
// int maximize(int arr[],int n,int k){
//     sort(arr,arr+n);
//     int  ans=arr[n-1]-arr[0];
//    int tempmin,tempmax;
//    tempmin=arr[0];
//    tempmax=arr[n-1];
//    for(int i=1;i<n;i++)
//    {
//     if(arr[0]-k<0){
//         continue;
//     }
//     tempmin=min(arr[0]+k,arr[i]-k);
//     tempmax=max(arr[i-1]+k,arr[n-1]-k);
//     ans=min(ans,tempmax-tempmin);
//    }
//    return ans;
// }

// int main(){

// int arr[]={7, 4, 8, 8, 8, 9};
// int k=6;
// cout<<maximize(arr,6,6);

// }

// 4-Minimum number of jumps to reach end-My approach
//  Given an array arr[] where each element represents the max number of steps that can be made forward from that index. The task is to find the minimum number of jumps to reach the end of the array starting from index 0. If the end isn’t reachable, return -1.

// int maximum_reachable(int arr[],int n){
//     int ans=0;
//     int temp=arr[0];
//     for(int i=0;i<n;i++){
//        int prev=i;
//        temp=prev+arr[i];
//        ++ans;
//        if(temp>=n-1){
//         break;
//        }
//     }
//     return ans;
// }

// int main(){
//       int arr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
//        int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Minimum number of jumps to";
//     cout << " reach the end is " << maximum_reachable(arr, n);
//     return 0;
// }

//5- Game of Greed	https://www.codechef.com/problems/PTEST

// int main()
// {
//     int T;
//     cin >> T;
//     while (T > 0)
//     {
//         int n;
//         cin >> n;
//         int num[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> num[i];
//         }
//         int k = 0, t = 0;
//         for (int i = n - 1, j = n - 2; i >= 0, j >= 0; i--, j--)
//         {
//             k = k + num[i];
//             i--;
//             t = t + num[j];
//             j--;
//         }
//         if (k > t)
//         {
//             cout << "Kaneki" << endl;
//         }
//         else
//         {
//             cout << "Touka" << endl;
//         }
//     }
//     T--;
// }

// 6-Valid Perfect Square	https://leetcode.com/problems/valid-perfect-square/

// approach-1
// int main(){
//     int n;
//     cin>>n;
//     int k=sqrt(n);
//     if(k*k==n){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
// }

// approach-2
// bool isPerfect(int n){
//     int low=1,high=n;
//     long long mid=(low+high)/2;
//     while(low<high){
//         mid=(high+low)/2;
//         if(mid*mid==n){
//             return true;
//         }
//         else if(mid*mid < n){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<isPerfect(n)<<endl;
// }


// 7-Reorder data in the log files

