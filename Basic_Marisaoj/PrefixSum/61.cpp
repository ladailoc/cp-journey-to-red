#include <bits/stdc++.h>
using namespace std;
#define int long long


unordered_map<int, int> cnt; // Các thao tác thêm, xóa, truy cập phần tử
// Ý tưởng: dùng prefix sum, với 1 thì +1, với 0 thì -1
// => Quy lại thành bài toán tìm số đoạn con liên tiếp có tổng bằng 0 (tức là số điểm vị trí có value bằng nhau trong pre)
signed main(){
    string s; cin >> s;

    cnt[0]++;

    int ans = 0, pre = 0;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == '0') pre += -1;
        else pre += 1;
        ans += cnt[pre];
        cnt[pre]++;
    }

    cout << ans;
    return 0;

}

/*
1 0 0  1 0
1 0 -1 0 -1
*/
