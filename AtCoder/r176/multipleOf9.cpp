#include<bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin>>n;
    long long int sum = 0;
    long long int len = n.length();
    for(int i = 0; i < len; i++) {
        sum += (int)n[i] - (int)'0';
    }
    cout<<(sum%9 == 0 ? "Yes" : "No")<<endl;
    return 0;
}