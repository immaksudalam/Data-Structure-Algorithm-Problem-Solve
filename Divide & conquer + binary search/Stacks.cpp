#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            auto it = upper_bound(v.begin(), v.end(), x);
            if(it==v.end()) v.push_back(x);
            else{
                auto it= upper_bound(v.begin(), v.end(), x)- v.begin();
                v[it] = x;

            }
        }
        cout<<v.size()<<" ";
        for(int i=0; i<v.size(); i++)cout<<v[i]<<" "; cout<<endl;
    }
}
