#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> v[N];
vector<int> vis(N, false);

void dfs(int src) {
    vis[src] = true;

    for(int child : v[src]) {
        if(!vis[child])
            dfs(child);
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    while(e--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    
    dfs(0);
    
    int t;
    cin >> t;
    while(t--) {
        int flag = 0;
        int a, b;
        cin >> a >> b;
        if(a==b) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int c : v[a]) {
            if(c == b) {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
