#include<iostream>
#include<stdio.h>
#include<set>

using namespace std;

// int main(){
//     set<char> a;
//     a.insert('g');
//     a.insert('f');
//     a.insert('g');
//     for(auto v:a){
//         cout<<v<<endl;
//     }
// }


int main(){
    set<int,greater<int> >s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(5);
    s1.insert(40);
    set<int>::iterator itr;
    cout<<"the set s1 is:"<<endl;
    for(itr=s1.begin();itr!=s1.end();itr++){
        cout<<*itr<<endl;
    }
    cout<<"after assigning to set2:"<<endl;
    set <int> s2(s1.begin(),s1.end());
    for(itr=s2.begin();itr!=s2.end();itr++){
        cout<<*itr<<endl;
    }
    // after erasing the values upto 30
    cout<<"After erasingbthe values upto 20:"<<endl;
    s2.erase(s2.begin(),s2.find(20));
    for(auto v:s2){
        cout<<v<<endl;
    }

    int num;
    num=s2.erase(20);
    cout<<num <<"has been removed"<<endl;

    cout<<"S1.lower_bound(40):"<<*s1.lower_bound(40)<<endl;
    cout<<"s1.upper_bound(40):"<<*s1.upper_bound(40)<<endl;

}
