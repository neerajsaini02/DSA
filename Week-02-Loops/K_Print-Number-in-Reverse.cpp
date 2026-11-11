//Print Number in Reverse

#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    if(n==0){
        cout<<"0";
        exit(0);
    }

    while(n>0){
        cout<<n%10;
        n=n/10;
    }
}

