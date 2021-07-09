#include<bits/stdc++.h>
using namespace std;

#define ll long long 

struct Node{
    ll x,y;
};
int a[100][100];
Node row[100][100];
Node col[100][100];
bool isok(ll i,ll j){
    if(row[i][j].x ==0 || row[i][j].y==0 || col[i][j].x==0 || col[i][j].y==0){
        return false;
    }
    return true;
}
ll value(ll i,ll j){
    ll c=0;
    for(ll p=row[i][j].x;p>=2;p--){
        for(ll q=col[i][j].x;q>=2;q--){
            if(p==2*q){
                c++;
            }
            if(q==2*p){
                c++;
            }
        }
        for(ll q=col[i][j].y;q>=2;q--){
            if(p==2*q){
                c++;
            }
            if(q==2*p){
                c++;
            }
        }
    
    
    }
    for(ll p=row[i][j].y;p>=2;p--){
        for(ll q=col[i][j].x;q>=2;q--){
            if(p==2*q){
                c++;
            }
            if(q==2*p){
                c++;
            }
        }
        for(ll q=col[i][j].y;q>=2;q--){
            if(p==2*q){
                c++;
            }
            if(q==2*p){
                c++;
            }
        }
    
    
    }

    return c;
}
ll solve(){
    ll r,c;
    cin>>r>>c;
    
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    
    for( ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            if(a[i][j]==1){
                ll ctr=0;
                for(ll k=j;k>=0;k--){
                    if(a[i][k]==1){
                        ctr++;
                    }
                    else{
                        break;
                    }
                }
                row[i][j].x=ctr;
                ctr=0;
                for(ll k=j;k<c;k++){
                    if(a[i][k]==1){
                        ctr++;
                    }
                    else{
                        break;
                    }
                }
                row[i][j].y=ctr;

            }
            else{
                row[i][j].x=0;
                row[i][j].y=0;
            }
        }
    }

    
    for( ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            if(a[i][j]==1){
                ll ctr=0;
                for(ll k=i;k>=0;k--){
                    if(a[k][j]==1){
                        ctr++;
                    }
                    else{
                        break;
                    }
                }
                col[i][j].x=ctr;
                ctr=0;
                for(ll k=i;k<r;k++){
                    if(a[k][j]==1){
                        ctr++;
                    }
                    else{
                        break;
                    }
                }
                col[i][j].y=ctr;

            }
            else{
                col[i][j].x=0;
                col[i][j].y=0;
            }

        }
    }
 
    ll cnt=0;
    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++){
            if(isok(i,j)==false){
                continue;
            }
            if(row[i][j].x==1 && row[i][j].y==1){
                continue;
            }
            if(col[i][j].x==1 && col[i][j].y==1){
                continue;
            }
            cnt+=value(i,j);
        }
    }
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