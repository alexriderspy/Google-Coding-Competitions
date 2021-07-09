#include<bits/stdc++.h>
using namespace std;
#define ll long long

  // odd I and even O
string s;
int finall,finalr;
void modify(int l,int r,int &c){
    if(l>=r) return;
    char ch;
    if(c%2==0){
        ch='O';c++;
        if(s[l]!=s[r]){
            if(s[l]==ch){
                finall=l+1,finalr=r;
                modify(l+1,r,c);
            }else{
                finall=l,finalr=r-1;
                modify(l,r-1,c);
            }
        }
        else{
            if(s[l]==s[r] && s[l]!=ch){
                finall=l,finalr=r;
                return;                
            }
            else{
                int flag=0;
            int j=l,k=r;
            for(;j<=k;j++,k--){
                if(s[j+1]==s[j] && s[j]==ch){
                    flag=1;break;
                }
                if(s[k-1]==s[k] && s[k]==ch){
                    flag=1;break;
                }
            }
                if((j-l)<=(r-k)){
                    finall=l+1;finalr=r;
                    modify(l+1,r,c);
                }else{
                    finall=l;finalr=r-1;
                    modify(l,r-1,c);

                }
        }
    }
}
    else{
        c++;
        ch='I';
        if(s[l]!=s[r]){
            if(s[l]==ch){
                modify(l+1,r,c);
            }else{
                modify(l,r-1,c);
            }
        }
        else{
            if(s[l]==s[r] && s[l]!=ch){
                finall=l,finalr=r;
                return;                
            }
            else{
                int flag=0;
            int j=l,k=r;
            for(;j<=k;j++,k--){
                if(s[j+1]==s[j] && s[j]==ch){
                    flag=1;break;
                }
                if(s[k-1]==s[k] && s[k]==ch){
                    flag=1;break;
                }
            }
                if((j-l)<=(r-k)){
                    finall=l+1;finalr=r;
                    modify(l+1,r,c);
                }else{
                    finall=l;finalr=r-1;
                    modify(l,r-1,c);

                }
        }
    }

    }
    
    
}
void solve(){
    int n;
    cin>>n;
    
    cin>>s;
    int g=1;
    modify(0,n-1,g);
    cout<<finall<<finalr;
    for(int i=finall;i<=finalr;i++){
        cout<<s[i];
    }
}
int main(){
    int t;
    cin>>t;
    for(int m=1;m<=t;m++){
        solve();
 //       cout<<"Case #"<<k<<": "<<x<<endl;
    }

}