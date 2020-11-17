//PRIORITY QUEUE Container in C++ STL
//https://www.studytonight.com/cpp/stl/stl-container-priority-queue#

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
          int n, z;
          cin>>n>>z;
          int arr[n];
          priority_queue<int>p;
          for(int i=0; i<n; i++){
             cin>>arr[i];
             p.push(arr[i]);
          }
          int ans =0;
          while(z>0 && p.top()> 0){
              z -= p.top();
              int t = p.top();
              p.pop();
              t/=2;
              p.push(t);
              ans++;
          }

         if(z<=0) cout<<ans<<endl;
         else cout<<"Evacuate"<<endl;
    }
}
