#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long int mpow10(long long int n) {
    long long int x = 1;
    for(long long int i = 0; i < n; i++) {
        x *= 10;
        x %= mod;
    }
    return x%mod;
}

long long int mpow9(long long int n) {
    long long int x = 1;
    for(long long int i = 0; i < n; i++) {
        x *= 9;
        x %= mod;
    }
    return x%mod;
}

long long int mpow8(long long int n) {
    long long int x = 1;
    for(long long int i = 0; i < n; i++) {
        x *= 8;
        x %= mod;
    }
    return x%mod;
}

int main() {
    long long int n;
    cin>>n;
    cout<<((mpow10(n) - 2*mpow9(n) + mpow8(n))%mod + mod)%mod<<endl;
    return 0;
}