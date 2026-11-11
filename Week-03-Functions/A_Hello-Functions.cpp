//Hello Functions

#include<iostream>
using namespace std;

void print(int n){
    for(int i=0;i<n;i++){
        cout<<"I am learning functions"<<endl;
    }
    return ;
}


int main(){
    int n;
    cin>>n;

    print(n);
}