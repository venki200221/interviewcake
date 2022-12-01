#include<iostream>
#include<stdio.h>

using namespace std;


int sum(int n){
    if(n>0){
        return sum(n-1)+n;
    }
    return 0;
}

int fact(int n){
  if(n<=1){
    return 1;
  }
  else{
    return fact(n-1)*n;
  }
}

int power(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}

// Taylor series
double e(int x,int n){
    static double p=1,f=1;
    if(n==0){
        return 1;
    }
    else{
        double r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

double e1(int x,int n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n;
        return e(x,n-1);
    }
}

// fibanocii series

int fib(int n){
    if(n<=1){
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}

// combinations
int c(int n,int r){
    if(n==0 || r==0){
        return 1;
    }
    else{
        return c(n-1,r-1)+c(n-1,r);
    }
}

// Tower of Hanoi
void steps(int n,int A,int B,int C){
    if(n>0){
        steps(n-1,A,C,B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        steps(n-1,B,A,C);
    }
}

int main(){
   
   cout<<sum(5)<<endl;
   cout<<fact(5)<<endl;
   cout<<power(2,4)<<endl;
   cout<<e(4,2)<<endl;
   cout<<e1(4,2)<<endl;
   cout<<fib(10)<<endl;
   cout<<c(5,2)<<endl;
   steps(3,1,2,3);
   return 0;
}