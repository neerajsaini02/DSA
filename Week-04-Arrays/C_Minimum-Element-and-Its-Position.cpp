//Minimum element and its position

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int min= INT_MAX;
    int position;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            position=i+1;
        }
    }

    cout<<min<<" "<<position;
}