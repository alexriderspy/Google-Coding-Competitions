#include<bits/stdc++.h>
using namespace std;
#define ll long long

int index(int start,vector<int>&a){
    
    //int n=a.size()-start;
   // cout<<"n"<<n<<" ";
    int min=a[start];
    int j=start;
    for(int i=start;i<a.size();i++){
        if(min>a[i]){
            j=i;
            min=a[i];
        }
    }
    reverse(a.begin()+start,a.begin()+j+1);
    
    //cout<<endl;
    //}
   // cout<<j<<" ";
    return j;
}
int solve(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    if(n==1){
        return 1;
    }
    ll sum=0;
    for(int i=0;i<n-1;i++){
        int j=index(i,a);
       // cout<<sum<<" ";
        sum+=(j-i+1);
    }
    a.clear();
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