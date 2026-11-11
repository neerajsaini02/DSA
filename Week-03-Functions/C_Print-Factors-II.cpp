//Print Factors - II

#include<iostream>
using namespace std;

void factors(int n){
    for(int i=n ; i>0 ; i--){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;

    factors(n);
}