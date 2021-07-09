#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>
#include <queue>

using namespace std;

typedef long long ll;

const int maxn = 1e5 + 7;

int a[maxn];
int n,k;
int kase;

struct Node {
    int val,cnt;
    int num;
    bool operator < (const Node& rhs) const{
        return num < rhs.num;
    }
};

void solve() {
    priority_queue<Node>Q;
    for(int i = 1;i <= n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i = 2;i <= n;i++) {
        Q.push({a[i] - a[i - 1],1,a[i] - a[i - 1]});
    }
    
    for(int i = 1;i <= k;i++) {
        Node now = Q.top();Q.pop();
        now.cnt++;
        now.num = now.val / now.cnt;
        if(now.val % now.cnt) now.num++;
        Q.push(now);
    }
    
    printf("Case #%d: %d\n",++kase,max(1,Q.top().num));
}

int main() {
    int T;scanf("%d",&T);
    while(T--) {
        scanf("%d%d",&n,&k);
        solve();
    }
    return 0;
}

