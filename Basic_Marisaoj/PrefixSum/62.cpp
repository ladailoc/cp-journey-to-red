#include <bits/stdc++.h>
using namespace std;
#define int long long

unordered_map<int, int> cnt;

// Ý tưởng: Dùng prefix sum vừa cộng vừa modulo cho số d để xem đoạn đó modulo với d là bao nhiêu
// Mục tiêu: Nếu tìm thấy 2 số module trong pre bằng nhau nghĩa là có đoạn con chia hết cho d
signed main(){
    int n, d, x; cin >> n >> d;

    cnt[0]++;
    int ans = 0, pre = 0;
    for (int i = 0; i < n; i++){
        cin >> x;
        pre = ((pre + x) % d + d) % d;
        ans += cnt[pre];
        cnt[pre]++;
    }

    cout << ans;

    return 0;

}

/*
5 4
1 3 -2 3 -5
1 0  2 1  0
*/

