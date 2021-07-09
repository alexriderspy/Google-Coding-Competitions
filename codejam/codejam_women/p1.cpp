#include<bits/stdc++.h>
using namespace std;
#define ll long long

int solve(){
    int n;
    cin>>n;
    vector<int>a;
    set<int>b;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
        b.insert(temp);
    }
    vector<ll>set;
    for(auto i=b.begin();i!=b.end();i++){
        set.push_back(*i);
    }
   // vector<ll>count;
    sort(a.begin(),a.end());
    ll sum=0,c=1,j=0;
    for(ll i=0;i<n;i++){
        while(a[i]==set[j] && j<b.size() &&i<n){
            sum+=c;i++;
           // cout<<i<<" ";
            //cout<<sum<<" ";        
        }i--;c++;
        j++;
    }
    return sum;

}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }

}