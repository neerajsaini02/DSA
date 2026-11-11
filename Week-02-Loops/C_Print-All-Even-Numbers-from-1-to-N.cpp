// Print all Even Numbers from 1 to N

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i=i+2){
//         cout<<i<<" ";
//     }
// }


//METHOD 2

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
             cout<<i<<" ";
        }
    }
}