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
        v[b].push_back(a);
    }
    
    dfs(0);
    int t;
    cin >> t;
        while(t--)
        {
            int a;
            cin>>a;
            if(v[a].size()==0)
            {
                cout<<-1<<endl;
            }
            else 
            {
                sort(v[a].begin(), v[a].end(), greater<int>());
                for(int c : v[a])
                {
                    cout<<c<<" ";
                }
                cout<<endl;
            }

        }
    return 0;
}
