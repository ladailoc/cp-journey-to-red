#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, q; cin >> n >> q;
    vector<int> v(n+1, 0), v_lr(n+1, 0), v_2(n+1, 0);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
    }



    for (int i = 1; i <= n; i++){
        v_2[i] = v[i] + v_2[i-1];
        v_lr[i] = (i * v[i]) + v_lr[i-1];
    }

    while (q--) {
        int a, b; cin >> a >> b;
        cout << v_lr[b] - v_lr[a - 1] - (a - 1) * (v_2[b] - v_2[a - 1]) << '\n';
    }

    return 0;

}


