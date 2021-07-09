#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int solve(){
    int n,k,p;
    cin>>n>>k>>p;
    int stack[101][31];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            cin>>stack[i][j];
        }
    }/*
    for (int i = 1; i <= n; i++)
    {
        for(int j=0;j<=k;j++){
            cout<<setw(5)<<stack[i][j]<<" ";
        }
        cout<<endl;
    }
*/

    int sum[101][31];
    for(int i=1;i<=n;i++){
        sum[i][0]=0;
        sum[i][1]=0;
        for(int j=1;j<=k;j++){
            sum[i][j]=sum[i][j-1]+stack[i][j];
        }
    }
    /*for (int i = 1; i <= n; i++)
    {
        for(int j=0;j<=k;j++){
            cout<<setw(5)<<sum[i][j]<<" ";
        }
        cout<<endl;
    }*/


    int dp[101][3001];
    for(int j=0;j<=p;j++){
        dp[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=p;j++){
            dp[i][j]=0;
            for(int x=0;x<=min(j,k);x++){
                dp[i][j]=max(dp[i][j],sum[i][x]+dp[i-1][j-x]);
            }
        }
    }
  /*  for (int i = 0; i <= n; i++)
    {
        for(int j=0;j<=p;j++){
            cout<<setw(5)<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
    return dp[n][p];

}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}