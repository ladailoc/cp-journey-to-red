#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, q; cin >> n >> q;
    vector<int> v(n+1, 0);
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (int i = 2; i <= n; i++)
        v[i] += v[i-1];

    while(q--) {
        int a, b; cin >> a >> b;
        cout << v[b] - v[a - 1] << '\n';
    }
    return 0;
}
