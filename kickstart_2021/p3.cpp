#include<bits/stdc++.h>
using namespace std;

#define ll long long 
ll a[300][300];
ll solve(){
    ll r,c;
    cin>>r>>c;
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    ll cnt=0;
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c-1;j++){
            if(a[i][j]<a[i][j+1]){
                if(a[i][j+1]-a[i][j]>=2){
                    cnt+=a[i][j+1]-a[i][j]-1;
                    //cout<<cnt<<" ";
                    a[i][j]+=a[i][j+1]-a[i][j]-1;
                    if(j>0){
                        j-=2;
                    }
                }
            }
            else if(a[i][j]>a[i][j+1]){
                if(a[i][j]-a[i][j+1]>=2){
                    cnt+=a[i][j]-a[i][j+1]-1;
                    a[i][j+1]+=a[i][j]-a[i][j+1]-1;

                }
            }
        }
    }
  
    for(ll j=0;j<c;j++){
        for(ll i=0;i<r-1;i++){
            if(a[i][j]<a[i+1][j]){
                if(a[i+1][j]-a[i][j]>=2){
                    cnt+=a[i+1][j]-a[i][j]-1;
                    a[i][j]+=a[i+1][j]-a[i][j]-1;
                    if(i>0){
                        i-=2;
                    }
                }
            }
            else if(a[i][j]>a[i+1][j]){
                if(a[i][j]-a[i+1][j]>=2){
                    cnt+=a[i][j]-a[i+1][j]-1;
                    a[i+1][j]+=a[i][j]-a[i+1][j]-1;

                }
            }
        }
    }
 /*   for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }*/
    return cnt;

}
int main(){
    int t;
    cin>>t;
    
    
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}