#include<bits/stdc++.h>
using namespace std;

int solve(){
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    vector<char>c;
    int n=s.size();
    int sum=0;
    //int k=0;
    for( int i=0;i<n;i++){
        if(s[i]!='?'){
            c.push_back(s[i]);
        }
    }
    for(int i=1;i<c.size();i++){
        if(c[i]=='C' && c[i-1]=='J'){
            sum+=y;
        }
        else if(c[i]=='J' && c[i-1]=='C'){
            sum+=x;
        }
    }
    return sum;
    
}
int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }

}