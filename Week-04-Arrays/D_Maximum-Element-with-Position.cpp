//Maximum element with position

#include<iostream>
#include<climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    int position;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            position=i+1;
        }
    }

    cout<<max<<" "<<position;

}