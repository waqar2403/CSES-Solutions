#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int t) {
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    v[0] = 1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=6;j++) {
            if(j <=i) {
                v[i] = (v[i] + v[i-j]) % 1000000007;
            }
        }
    }
    cout<<v[n]<<endl;
}
int main() {
#ifndef ONLINE_JUDGE
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile || !outFile) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    cin.rdbuf(inFile.rdbuf());
    cout.rdbuf(outFile.rdbuf());
#endif

    int t=1;
   // cin >> t;
     while(t--) {
        solve(t);
    }
    return 0;
}
