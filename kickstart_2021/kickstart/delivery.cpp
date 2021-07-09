#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int r,c;
bool isSafe(int x,int y){
    return (x>=0 && y>=0 && x<r && y<c);
}
int solve(){
    
    cin>>r>>c;
    int a[10][10];
    vector<string>s;
    for(int i=0;i<r;i++){
        string temp;
        cin>>temp;
        s.push_back(temp);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=s[i][j]-'0';
        }
    }
    int b[10][10];
    memset(b,10000,sizeof(b));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                int dist=10000;
                //b[i][j]=INT_MAX;
                for(int k=0;k<r;k++){
                    for(int l=0;l<c;l++){
                        if(a[k][l]==1)
                        {
                            dist=abs(k-i)+abs(l-j);
                            b[i][j]=min(b[i][j],dist);
                        }
                    }
                
            }
        }
    } 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<setw(2)<<b[i][j]<<" ";
        }
        cout<<endl;
    } 
    int maxi=-1;
    int mini=10000;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=1){
                a[i][j]=1;
            }
                int dist=10000;
                //b[i][j]=INT_MAX;
                for(int k=0;k<r;k++){
                    for(int l=0;l<c;l++){
                        dist=abs(k-i)+abs(l-j);
                        //if(k!=i && l!=j)
                        
                        b[k][l]=min(b[k][l],dist);
                        maxi=max(b[k][l],maxi);
                    }
                
            }
        

        mini=min(maxi,mini);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<setw(2)<<b[i][j]<<" ";
        }
        cout<<endl;
    } 

    return mini;
}

int main(){
    int t;
    cin>>t; 
    for(int k=1;k<=t;k++){
        int x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}