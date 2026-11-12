//Sum of array

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=0;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }

    cout<<sum;
}