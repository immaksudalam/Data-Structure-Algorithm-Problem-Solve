#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && st.top()== s[i])while(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else st.push(s[i]);
        }
        if(st.size()==0)cout<<"KHALI"<<endl;
        else{
            vector<char>v;
            while(!st.empty()){
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin(), v.end());
            for(int i=0; i<v.size(); i++){
                cout<<v[i];
            }cout<<endl;
        }
    }
}
