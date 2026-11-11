#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    string s;
    cin>>s;

    stack<char> st;
    

    int ans=0;
    for(char ch : s){
        if(ch=='(' || ch=='[' || ch=='{'){
            st.push(ch);
            ans=max(ans,(int)st.size());
        }
        else if(ch==')'){  //Condition to remove the noise
            st.pop();
        }
    }
    cout<<ans;
}
