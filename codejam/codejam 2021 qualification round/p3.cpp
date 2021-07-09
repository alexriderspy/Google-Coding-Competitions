#include<bits/stdc++.h>
using namespace std;

int p=0;
void solve(){
    int n,c;
    cin>>n>>c;
    vector<int>a;
    for(int i=0;i<n;i++){
        a.push_back(i+1);
    }   
    int max=n*(n+1)/2 -1;
    if(c<n-1 || c>max ){
        ++p;
        cout<<"Case #"<<p<<": "<<"IMPOSSIBLE"<<endl; return;    

    }
    c-=n-1;
    int k=1;
    while(k<n ){
        if(c<=0){
            break;
        }
        reverse(a.rbegin(),a.rbegin()+k+1);
      /*  for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }*/
        //cout<<endl;
        //cout<<"k"<<k;

        c-=k;
        if(c<0){
            c+=k;
            reverse(a.rbegin(),a.rbegin()+k+1);
            reverse(a.begin(),a.begin()+c+1);break;
        }
        k++;
    }
    ++p;
    cout<<"Case #"<<p<<": ";
    for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        } 
    cout<<endl;
    a.clear();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}