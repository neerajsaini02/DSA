// H2 Calculator

//yaha par ye m*n calculate hoga to um and n int hai to result bhi int type

#include<iostream>
using namespace std;

int main(){
    int N;
    int M;
    cin>>N;
    cin>>M;

    
    cout<<N<<" + "<<M<<" = "<<N+M<<endl;
    cout<<N<<" - "<<M<<" = "<<N-M<<endl;
    cout<<N<<" * "<<M<<" = "<<(long long)N*M<<endl;
    cout<<N<<" / "<<M<<" = "<<N/M<<endl;
    cout<<N<<" % "<<M<<" = "<<N%M<<endl;
}