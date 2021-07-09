#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(){
    ll n,k;
    cin>>n>>k;
    vector<string>a;
    vector <ll>b;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
        b.push_back(s.size());
    }
    sort(b.begin(),b.end());
    sort(a.begin(),a.end());
    ll score=0;
    for(ll j=0;j<b[n-1];j++){
        char ch=a[n-1][0];
        ll ctr=0;
        for(ll i=n-1;i>=0;i--){
           if(j<a[i].size()) 
            { 
               if(ch==a[i][j]){
                ctr++;
                
            }
            else{
                score+=ctr/k;
                ctr=0;ch=a[i][j];i++;
            }
            
        }
        else{
            continue;
        }
        }
        score+=ctr/k;
    }
   // cout<<score<<endl;
   return score;
}

int main(){
    int t;
    cin>>t; 
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}