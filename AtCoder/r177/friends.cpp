#include<bits/stdc++.h>

using namespace std;

unordered_map<int,vector<int>> graph;
vector<int> visited(200005);

int dfs(int i) {
    int conn = 1;
    for(int j = 0; j < graph[i].size(); j++) {
        if(!visited[graph[i][j]]) {
            visited[graph[i][j]] = 1;
            conn += dfs(graph[i][j]);
        }
    }
    return conn;
}

int main() {
    int n,m;
    cin>>n>>m;
    for(int i = 0; i < m; i++) {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ans = INT_MIN;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            visited[i] = 1;
            int temp = dfs(i);
            ans = max(ans, temp);
        }
    }
    cout<<ans<<endl;
    return 0;
}