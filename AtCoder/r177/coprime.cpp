#include<bits/stdc++.h>

using namespace std;

bool isPairwise = true;
unordered_map<long long int, long long int> m;
void factors(int a) {
    if(isPairwise == false) {
        return;
    } else {
        if(m[a] && a != 1) {
            isPairwise = false;
            return;
        } else {
            m[a] = 1;
        }
        for(int i = 2; i*i < a; i++) {
            int f1,f2;
            if(a%i == 0) {
                f1 = i;
                f2 = a/i;
                if(f1 == f2) {
                    if(m[f1]) {
                        isPairwise = false;
                        return;
                    } else {
                        m[f1] = 1;
                    }
                } else {
                    if(m[f1]) {
                        isPairwise = false;
                        return;
                    } else {
                        m[f1] = 1;
                    }

                    if(m[f2]) {
                        isPairwise = false;
                        return;
                    } else {
                        m[f2] = 1;
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    long long int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    long long int sg = a[0];
    factors(a[n-1]);
    for(int i = 0; i < n-1; i++) {
        factors(a[i]);
        sg = __gcd(sg, a[i+1]);
    }
    if(isPairwise) {
        cout<<"pairwise coprime"<<endl;
    } else if(sg == 1) {
        cout<<"setwise coprime"<<endl;
    } else {
        cout<<"not coprime"<<endl;
    }
    return 0;
}