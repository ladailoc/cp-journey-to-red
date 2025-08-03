#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n; cin >> n;
    vector<int> v(n+2, 0), left(n+2, INT_MIN), right(n+2, INT_MIN);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int mx = INT_MIN;
    for (int i = 1; i <= n; i++){
        mx = max (v[i], v[i] + mx);
        left[i] = max(left[i-1], mx);
    }

    mx = INT_MIN;
    for (int i = n; i >= 1; i--){
        mx = max(v[i], v[i] + mx);
        right[i] = max(right[i + 1], mx);
    }

    mx = INT_MIN;
    for (int i = 1; i < n; i++){
        mx = max (left[i] + right[i+1], mx);
    }

    cout << mx;
    return 0;

}


