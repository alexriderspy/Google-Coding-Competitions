#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    ll n;
    cin>>n;
    string ans="";
    vector<pair<int,string>>a;
    
    for(int i=1;i<=n;i++){
        string temp;
        cin>>temp;
        a.push_back(make_pair(temp.size(),temp));
    }
    sort(a.begin(),a.end());
    int length=a[n-1].first;
        for(int i=0;i<length;i++){
            if(a[n-1].second[i]=='*') {
                continue;}
            ans.push_back(a[n-1].second[i]);
        }
    // cout<<ans<<" ";   
    for(int j=0;j<n-1;j++){
        string s=a[j].second;
            int c=0;
            for(int k=0;s[k]!='*';k++){
               // cout<<s[k]<<" ";
                if(s[k]!=ans[c++]){
                   // cout<<ans[k]<<" ";
                    return "*";
                }
            }
            c=ans.size()-1;
            for(int k=s.size()-1;s[k]!='*';k--){
               // cout<<s[k]<<" ";
                if(s[k]!=ans[c--]){
                    //cout<<ans[k]<<" ";
                    return "*";
                }
            }

        }
    return ans;
}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        string x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }

}