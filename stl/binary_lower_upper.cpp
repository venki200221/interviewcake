#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>

using namespace std;

// binary search

// int main()
// {
//     vector<int> arr={10,20,30};
//     if(binary_search(arr.begin(),arr.end(),15)){
//         cout<<"15 exists"<<endl;
//     }
//     else{
//         cout<<"15 does not exists"<<endl;
//     }
// }

// lower bound
// int main(){

// vector<int>v1={10, 15, 20, 25, 30, 35};
// vector<int>v2={10, 15, 20,20, 25, 30, 35 };
// vector<int>v3={10, 15, 25, 30, 35 };

// cout<<"the position of 20 in single occurence:"<<endl;
// cout<<lower_bound(v1.begin(),v1.end(),20)-v1.begin()<<endl;

// cout<<"the position of 20 in multiple occurence:"<<endl;
// cout<<lower_bound(v2.begin(),v2.end(),20)-v2.begin()<<endl;

// }


int main(){

vector<int>v1={10, 15, 20, 25, 30, 35};
vector<int>v2={10, 15, 20,20, 25, 30, 35 };
vector<int>v3={10, 15, 25, 30, 35 };

cout<<"the position of 20 in single occurence:"<<endl;
cout<<upper_bound(v1.begin(),v1.end(),20)-v1.begin()<<endl;

cout<<"the position of 20 in multiple occurence:"<<endl;
cout<<upper_bound(v2.begin(),v2.end(),20)-v2.begin()<<endl;

}