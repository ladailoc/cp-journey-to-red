#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = (int)1e3;
vector<vector<int>> v(MAXN + 1, vector<int>(MAXN + 1, 0));
signed main(){
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++){
            cin >> v[i][j];
        }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
           v[i][j] += v[i-1][j] + v[i][j-1] - v[i-1][j-1];
        }
    }

    while (q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << v[c][d] - v[a-1][d] - v[c][b-1] + v[a-1][b-1] << '\n';
    }
    return 0;

}


