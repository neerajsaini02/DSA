//Check if array is sorted

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag=1;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}