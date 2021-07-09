#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    
    cin>>s;
    ll ctr=0;
    
    for(ll i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            ctr++;
        }
    }
    return abs(ctr-k);
}

int main(){
    int t;
    cin>>t;
    
    
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}