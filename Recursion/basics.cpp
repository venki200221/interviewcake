#include<iostream>
#include<stdio.h>

using namespace std;
// int x=0;
// Tail recursion
void fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }
}

void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<n<<endl;
    }
}

// without static & global
int fun(int n){
    if(n>0){
        
        return fun(n-1)+n;
    }
    return 0;
}

// with static and global have same effect
int funn(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

void treerec(int n){
    if(n>0){
        cout<<n<<endl;
        treerec(n-1);
        treerec(n-1);
    }
}


int main(){
    // fun1(6);
    // fun2(6);
    // cout<<fun(6)<<endl;
    // cout<<funn(6)<<endl;
    treerec(6);
}