#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int main() {
    int n;
    cin>>n;
    long long int a[n];
    long long int sum = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        sum += a[i]%mod;
    }
    sum %= mod;
    long long int ans = 0;
    for(int i = 0; i < n; i++) {
        sum = (sum+mod-a[i]%mod)%mod;
        ans += (a[i]%mod * sum)%mod;
    }
    cout<<ans%mod<<endl;
    return 0;
}