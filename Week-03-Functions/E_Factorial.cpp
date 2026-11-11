//Factorial

#include<iostream>
using namespace std;

long long factorial(int n){

    if(n==0){
        return 1;
    }
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}


int main(){
    int n;
    cin>>n;
    long long ans=factorial(n);
    cout<<ans;
}