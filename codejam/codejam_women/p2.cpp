#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int count=0;
    string ans="A";
    for(int i=0;i<n-1;i+=2){
        if(a[i]<a[i+1]){
            count=a[i+1]-a[i]+1;
            int j=0;
            for(;j<a[i]-1;j++){
                ans+='A'+j+1;
            }
            ans+=ans.back()+count;
            char ch=ans.back();
          //  cout<<ans<<" ";
            for(j=0;j<a[i+1];j++){
                ans+=ch-j-1;
            }

        }
        else{
            int k=0;
            for(;k<a[i];k++){
                ans+='A'+k+1;
            }
            for(k=a[i+1];k>0;k--){
                ans+='A'+k-1;
            }  
        }
    }
    if(n%2!=0){
        int tem=a.back();
        for(int i=0;i<tem;i++){
            ans+='A'+i+1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        string x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }

}