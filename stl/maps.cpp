#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main(){
  map <int,int> gquiz1;
  gquiz1.insert(pair<int,int>(1,40)); 
  gquiz1.insert(pair<int,int>(2,30));

  gquiz1[7]=10 ;  //another way of insertig an element into a map
  gquiz1[3]=11;
  gquiz1[7]=20;
  gquiz1[7]=65;
  map <int,int>::iterator itr;
  cout<<"The map gquiz1 is:"<<endl;
  for(itr=gquiz1.begin();itr != gquiz1.end();itr++){
    cout<<"\t"<<itr->first<<"->"<<itr->second <<endl;
  }


//   assigning all the elements of gquiz1 to gquiz2

map <int,int> gquiz2(gquiz1.begin(),gquiz1.end());

cout<<"The conetent of map 2:"<<endl;

for(auto v:gquiz2){
    cout<<v.first<<"->"<<v.second<<endl;
}

// removing the elements of guiz2

gquiz2.erase(gquiz2.begin(),gquiz2.find(2));

cout<<"After removing:"<<endl;
for(auto v:gquiz2){
    cout<<v.first<<"->"<<v.second<<endl;
}

// removing a particular key - value pair

int num;
num=gquiz2.erase(3);
cout<<num <<"has been deleted"<<endl;
for(auto v:gquiz2){
    cout<<v.first<<"->"<<v.second<<endl;
}

cout<<"guiz1 upperbound:"<<endl;
cout<<gquiz1.upper_bound(7)->first<<"->"<<gquiz1.upper_bound(7)->second<<endl;
cout<<gquiz1.lower_bound(7)->first<<"->"<<gquiz1.lower_bound(7)->second<<endl;


}