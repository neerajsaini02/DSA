//Print array in reverse

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    //Input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //Print in reverse order
    for(int i=n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }
}