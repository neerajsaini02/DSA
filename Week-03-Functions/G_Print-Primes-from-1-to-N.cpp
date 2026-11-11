//Print Primes from 1 to N

#include<iostream>
using namespace std;

// void printPrime(int n){

//     if(n==1){
//         return;
//     }
   
//     for(int i=2;i<=n;i++){

//         int flag=1;
//         for(int j=2;j<i-1;j++){
//             if(i%j==0){
//                 flag=0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<" ";
//         }
//     }
//     return;
// }


void printPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    printPrime(n);
}