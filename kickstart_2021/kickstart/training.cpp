#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll solve(){
    ll n,p;
    cin>>n>>p;
    ll temp;
    vector<ll>a;
    //b.push_back(-1);
    for(ll i=0;i<n;i++){
        
        cin>>temp;
        a.push_back(temp);
    }
    ll mini=INT_MAX;
    sort(a.begin(),a.end(),greater<ll>());
    for(ll i=0;i<=n-p;i++){
        ll highest=a[i];
        ll score=0;
        for(ll j=i+1;j<p+i;j++){
            score+=highest-a[j];
        }
    mini=min(mini,score);
    }
    return mini;
}
int main(){
    int t;
    cin>>t; 
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}