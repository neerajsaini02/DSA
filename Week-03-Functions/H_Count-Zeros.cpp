//Count zeros

#include<iostream>
#include<vector>
using namespace std;


// int countZeroes(long long n){
//     int count=0;

//     while(n>0){
//         if(n%10==0){
//             count++;
//         }
//         n=n/10;
//     }
//     return count;
// }


int countZeroes(long long n){
    int count=0;

    if(n==0){
        return 1;
    }

 while(n>0){

    if(n%10==0){
        count++;
    }
    n=n/10;
 }
 return count;
}

int main(){
    long long n;
    cin>>n;
    int ans=countZeroes(n);
    cout<<ans;
}