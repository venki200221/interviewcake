#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

// int main(){
//     vector <int> vec;
//     int i;
//     cout<<"The size of the vector:"<<vec.size()<<endl;

//     for(int i=0;i<=5;i++){
//         vec.push_back(i);
//     }

//     cout<<"The size of the vector:"<<vec.size()<<endl;
    
//     cout<<"the capacity of the vector:"<<vec.capacity()<<endl;

//     cout<<"The maximum size of the vector:"<<vec.max_size()<<endl;

//     vec.resize(4);

//     cout<<"The curent size of the vector is:"<<vec.size()<<endl;
   
//     if(vec.empty()==false){
//         cout<<"Vector is not empty"<<endl;
//     }
//     else{
//         cout<<"Vector is empty"<<endl;
//     }

   
//     cout<<"The refrence operator [g]:"<<vec[2]<<endl;
//     cout<<"using .at():"<<vec.at(2)<<endl;
//     cout<<"using front():"<<vec.front()<<endl;
//     cout<<"Using back():"<<vec.back()<<endl;

//     int *pos=vec.data();

//     cout<<"The first element is:"<<*pos<<endl;

//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<endl;
//     }

//     for(auto i=vec.begin();i<vec.end();i++){
//         cout<<"value of v:"<<*i<<endl;       //same result using cbegin and cend
//     }
    

//     for(auto i=vec.rbegin();i<vec.rend();i++){
//         cout<<"Value of v:"<<*i<<endl;      //same result using crbegin and crend
//     }

//     cout<<"Using iterator"<<endl;
//     vector<int>::iterator v=vec.begin();

//     while(v!=vec.end()){
//         cout<<"value of v="<<*v<<endl;
//         v++;
//     }

// return 0;

// }


// int main(){
//     vector <int> v;
//     v.assign(5,10);

//     cout<<"The elements of the vector are:"<<endl;

//     for(auto i=v.begin();i<v.end();i++){
//         cout<<*i<<endl;
//     }

//     v.pop_back();

//     cout<<"The elements after poping out"<<endl;

//     for(auto i=v.begin();i<v.end();i++){
//         cout<<*i<<endl;
//     }
   
//     v.insert(v.begin(),50);
//     cout<<"V[0]:"<<v[0]<<endl;

//     v.erase(v.begin());
//     cout<<"v[0]"<<v[0]<<endl;
    
//     v.emplace(v.begin(),100);
//     cout<<"V[0]:"<<v[0]<<endl;

//     v.emplace_back(200);
//     cout<<"V[last element]:"<<v[v.size()-1]<<endl;
    
//     v.clear();

//     cout<<"The size of the vector after erase:"<<v.size()<<endl;

//     vector <int>v1,v2;
//     v1.push_back(1);
//     v1.push_back(2);
//     v2.push_back(3);
//     v2.push_back(4);

//     v1.swap(v2);

//     for(auto i=v1.begin(),j=v2.begin();i<v1.end(),j<v2.end();i++,j++){
//         cout<<"Vector v1:"<<*i<<endl;
//         cout<<"Vector v2:"<<*j<<endl;
//     }

//    swap(v1[0],v1[1]);
   
//    for(auto i=v1.begin();i<v1.end();i++){
//     cout<<*i<<endl;
//    }

//    iter_swap(v.begin(),v.begin()+v.size()-1);
   
//    for(auto i=v1.begin();i<v1.end();i++){
//     cout<<*i<<endl;
//    }
// }

//     struct  Interval
//      {
//         int start,end;
//      };
//    bool compareInterval(Interval i1,Interval i2){
//         return(i1.start<i2.start);
//      }

// int main(){
//     vector<int> v { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

//     sort(v.begin(),v.end());

//     cout<<"Sorted ";
//     for(auto x:v){
//         cout<<x<<endl;
//     }

//    sort(v.begin(), v.end(), greater<int>());
  
//     cout << "Sorted \n";
//     for (auto x : v)
//     cout << x << " ";

//     vector<Interval> v1 { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };

//     sort(v1.begin(), v1.end(), compareInterval);
  
//     cout << "Intervals sorted by start time : \n";
//     for (auto x : v1)
//         cout << "[" << x.start << ", " << x.end << "] ";  

// }


// bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
//     return (a.second <b.second);
// }


// int main(){
//     vector< pair<int,int> >vec;

//    int arr[] = {10, 20, 5, 40 };
//    int arr1[] = {30, 60, 20, 50};
//    int n = sizeof(arr)/sizeof(arr[0]);

//    for (int i=0; i<n; i++)
//     vec.push_back( make_pair(arr[i],arr1[i]) );
//     sort(vec.begin(), vec.end());
//      cout << "The vector after sort operation is:\n" ;
//     for (int i=0; i<n; i++)
//     {
       
//         cout << vec[i].first << " "
//              << vec[i].second << endl;
//     }

//     sort(vec.begin(), vec.end(), sortbysec);

//     cout << "The vector after sort operation is:\n" ;
//     for (int i=0; i<n; i++)
//     {
       
//         cout << vec[i].first << " "
//              << vec[i].second << endl;
//     }
// }

// array slicing

// vector <int> slicing(vector<int>& arr,int x,int y){
//     auto start=arr.begin()+x;
//     auto end=arr.begin()+y+1;
//     vector <int> result(y-x+1);
//     copy(start,end,result.begin());
//     return result;
// }

// void PrintResult(vector<int> & ans){
//     for(auto v:ans){
//         cout<<v<<endl;
//     }
// }
// int main(){
//     vector<int> arr;
//     for(int i=0;i<10;i++){
//         arr.push_back(i);
//     }
//     int x=2,y=5;
//     vector<int>ans;
//     ans=slicing(arr,x,y);
//     PrintResult(arr);
//     PrintResult(ans);
// }


// inplace algorithms
// An in-place function modifies data structures or objects outside of its own stack frame ↴ (i.e.: stored on the process heap or in the stack frame of a calling function). Because of this, the changes made by the function remain after the call completes.


vector <int> Squarevinplace(vector <int> &v){
    for(size_t i=0;i<v.size();i++){
        v[i]*=v[i];
    }
    return v;
}

vector <int> Suarenotinplace(vector <int> &v){
    vector <int> res(v.size());

    for(size_t i=0;i<v.size();i++){
        int item =v[i];
        res[i]=item*item;
    }
}

int main(){
    vector <int> intvector;
    
}