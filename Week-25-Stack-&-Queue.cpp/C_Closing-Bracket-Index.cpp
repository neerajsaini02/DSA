#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    string s;
    cin>>s;

    int p;
    cin>>p;

    stack<int>st;

    for(int i=0;i<s.size();i++){
        
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(i);
        }
        else if(s[i]==')'){   //This condition to remove the noise
            if(st.empty()){
                cout<<-1;
                exit(0);
            }
            else{
                if(st.top()==p){
                  cout<<i;
                }
                st.pop();
            }
        }
    }

    if(!st.size()==0) cout<<-1;

}
