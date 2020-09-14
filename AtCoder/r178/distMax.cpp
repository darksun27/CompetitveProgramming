#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    //take positive and negative array to store x+y (+ +) and x-y (+ -)
    long long int pa[n], na[n];
    for(int i = 0; i < n; i++) {
        long long int a, b;
        cin>>a>>b;
        pa[i] = a+b;
        na[i] = a-b;
    }
    sort(pa, pa+n);
    sort(na, na+n);
    cout<<max(pa[n-1] - pa[0], na[n-1]-na[0])<<endl;
    return 0;
}