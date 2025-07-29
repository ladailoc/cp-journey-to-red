#include <bits/stdc++.h>
using namespace std;
#define int long long

unordered_map<int, int> cnt;

// Ý tưởng: cộng tổng prefix với ý tổng đoạn A + B = X thì ta chỉ cần tìm số lượng đoạn có tổng B = X - A
signed main(){
    int n, x, inp; cin >> n >> x;

    int ans = 0, pre = 0;
    cnt[0]++;
    for (int i = 0; i < n; i++){
        cin >> inp;
        pre += inp;
        ans += cnt[pre - x];
        cnt[pre]++;
    }
    cout << ans;
    return 0;

}


