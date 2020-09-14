#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(max(max(a*c,a*d),b*c),b*d)<<endl;
    return 0;
}