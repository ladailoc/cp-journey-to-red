#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, x; cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++){
        cin >> x;
        v[i] = v[i - 1] + x;
    }

    int ans = INT_MIN;
    for (int i = 1; i < n; i++){
        ans = max({v[n] - 2*v[i], 2*v[i] - v[n], ans});
    }
    cout << ans;
    return 0;

}


