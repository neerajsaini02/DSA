//Check Prime

#include<iostream>
using namespace std;

void primeCheck(int n){

    int flag=1;
    if(n==1){
        cout<<"Not Prime";
        return;
    }

    for(int i=2; i<=n-1;i++){
        if(n%i==0){
            flag=0;
        }
    }

    if(flag==0){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }

    return;

}

int main(){
    int n;
    cin>>n;

    primeCheck(n);
}