#include<bits/stdc++.h>
using namespace std;

#define ll long long 
ll a[500][500];
ll b[500][500];

ll solve(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    ll row[500];
    ll col[500];
    for(ll i=0;i<n;i++){
        cin>>row[i];
    }
    for(ll i=0;i<n;i++){
        cin>>col[i];
    }

}

int main(){
    int t;
    cin>>t;
    
    
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}