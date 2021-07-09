#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll solve(){
    ll n,b;
    cin>>n>>b;
    int flag=0;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    ll i=0;
    for(i=0;i<n;i++){
        b-=a[i];
        if(b<0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        return i;    
    }
    else{
        return n;
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