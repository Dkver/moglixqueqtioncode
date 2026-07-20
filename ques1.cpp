#include<bits/stdc++.h>
using namespace std;
int longestvalidlength(string s){
    stack<int>st;
    st.push(-1);
    int n=s.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                maxlen=max(maxlen,i-st.top());
            }
        }
    }
    return maxlen;
}
int main(){
    string s;
    cin>>s;
    cout<<longestvalidlength(s)<<endl;
    return 0;
}