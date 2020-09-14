#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n], b[n];
    int ce = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++) {
        cin>>b[i];
        if(a[i] == b[i]) ce++;
    }
    if(ce > n/2) cout<<"No"<<endl;
    else {
        ce = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == b[n-1-i]) ce++;
        }
        cout<<
    }
    return 0;
}