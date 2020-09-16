#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, x, t;
    cin>>n>>x>>t;
    cout<<(n/x)*t + ((n%x) ? t:0)<<endl;
    return 0;
}