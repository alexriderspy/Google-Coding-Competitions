#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define N 1000
class Trie {
public:
    class TrieNode {
        public:
        bool end;
        TrieNode* ptr[26];
        TrieNode() {
            end = false;
            for(int i = 0; i < 26; i++) {
                ptr[i] = nullptr;
            }
        }
    };
    TrieNode* root ;
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word,ll *count) {
        //int count=0;
        ll n = word.size();
        TrieNode* temp = root;
        for(ll i = 0; i < n; i++) {
            ll pos = word[i] - 'a';
            if(temp->ptr[pos] == nullptr) {
                temp->ptr[pos] = new TrieNode();
            }
            else{
                cout<<count[i]<<" ";
                count[i]++;
            }
            temp = temp->ptr[pos];
        }
        temp->end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        int n = word.size();
        TrieNode* temp = root;
        for(int i = 0; i < n; i++) {
            int pos = word[i] - 'a';
            if(temp->ptr[pos] == nullptr) {
                return false;
            }
            temp = temp->ptr[pos];
        }
        return temp->end;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        int n = prefix.size();
        TrieNode* temp = root;
        for(int i = 0; i < n; i++) {
            int pos = prefix[i] - 'a';
            if(temp->ptr[pos] == nullptr) {
                return false;
            }
            temp = temp->ptr[pos];
        }
        return true;
    }
};

ll solve(){
    ll n,k;
    cin>>n>>k;
    vector<string>a;
    int siz=0;
    Trie *obj=new Trie();
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
        siz=max((int)s.size(),siz);
    }
    ll count[N];
    memset(count,1,sizeof(count));
    for(ll i=0;i<n;i++){
        obj->insert(a[i],count);
    }
    int score=0;
    for(int i=0;i<siz;i++){
        cout<<count[i]<<" ";
    }
    for(int i=0;i<siz;i++){
        count[i]=count[i]/k;
        score+=count[i];
    }
    return score;
}
int main(){
    int t;
    cin>>t; 
    for(int k=1;k<=t;k++){
        ll x=solve();
        cout<<"Case #"<<k<<": "<<x<<endl;
    }
}