#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    string t;
    cin>>s>>t;
    int lens = s.length(), lent = t.length();
    int cost = lent;
    for(int i = 0; i <= lens-lent; i++) {
        int same = 0;
        for(int j = 0; j < lent; j++) {
            if(s[i+j] == t[j]) {
                same++;
            }
        }
        cost = min(lent-same, cost);
    }
    cout<<cost<<endl;
    return 0;
}