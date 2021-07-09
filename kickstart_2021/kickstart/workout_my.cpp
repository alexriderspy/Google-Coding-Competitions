#include<bits/stdc++.h>
using namespace std;
#define ll long long 

struct Node{
    ll val,cnt,num;
    bool operator <(const Node &rhs) const{
        return num<rhs.num;
    }
};

ll solve(){
    priority_queue<Node>Q;
    vector<ll>a;
    a.push_back(0);
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        ll temp;cin>>temp;
        a.push_back(temp);
    }    
    for(ll i=2;i<=n;i++){
        Q.push({a[i]-a[i-1],1,a[i]-a[i-1]});
    }
    /*for(ll i=1;i<=n-1;i++){
       
    }*/
 
    for(ll i=1;i<=k;i++){
        Node now=Q.top();Q.pop();
        now.cnt++;
        now.num=now.val/now.cnt;
        if(now.val%now.cnt) now.num++;
        // cout<<now.val<<" "<<now.cnt<<" "<<now.num<<" "; //Q.pop();
        Q.push(now);
    }
    return (1>Q.top().num?1:Q.top().num);
   
}
int main(){
    ll t;
    cin>>t;
    for(ll k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }

}