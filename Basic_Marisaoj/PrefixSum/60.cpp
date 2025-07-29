#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int res = v[0], mx = v[0];
    for (int i = 1; i < n; i++){
        mx = max (mx + v[i], v[i]);
        res = max(res, mx);
    }

    cout << res;
    return 0;

}
