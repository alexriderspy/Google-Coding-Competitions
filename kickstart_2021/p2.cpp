#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll solve(){
    ll r,c;
    cin>>r>>c;
    ll a[1000][1000];
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            if(a[i][j]==1 ){
                ll ctr_c=0;
                ll start_col=j;
                while(a[i][j]==1 && j<c){
                    j++;ctr_c++;
                }
                j--;
                ll end_col=j;
                ll req1=ctr_c*2;
                ll ctr_r=0;
                for(ll k=i;k>=0;k--){
                    
                    if(a[k][start_col]==1){
                        while(a[k][start_col]==1 && k>=0){
                            ctr_r++; k--;
                        }
                        break;
                    }
                }
                if(ctr_c%2==0){
                    
                }
            }
        }
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