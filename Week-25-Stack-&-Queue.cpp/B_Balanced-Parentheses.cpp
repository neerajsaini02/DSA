#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool matching( char sttop, char s){
   if((sttop=='(' && s==')') ||
       (sttop=='[' && s==']') ||
        (sttop=='{' && s=='}')) {
            return true;
        }

    else{
        return false;
    }
}

bool balancedParentheses(string s){
    stack<char> st;

    for(int i=0;i<s.size();i++){

        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }

        else{
            if(st.empty()){
                return false;
            }
            else if(matching(st.top(),s[i])){
                    st.pop();
            }
            else{
                return false;
            }
        }
    }
    return st.size()==0;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string s;
        cin>>s;

        if(balancedParentheses(s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
} 

