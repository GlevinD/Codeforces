#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define test_case int t;cin >> t;while(t--)
#define f(i,n) for(ll i = 0 ; i < n ; i++)
#define MOD 1000000007   //10^9 + 7 
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int,int> pi;
 
void solve(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        ll max_val = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] > max_val) max_val = a[i];
        }
        vector<bool> seen(n + 2, false);
        for (int x : a) {
            if (x <= n) seen[x] = true;
        }
        int m = 0;
        while (seen[m]) ++m;
        ll sumA = (ll)m * m + (ll)(n - m) * (m + max_val);
        ll sumB = 0;
        if (max_val >= m) {
            sumB = (ll)m * (m + 1) / 2 + (ll)(m + 1) * max_val + (ll)(n - m - 1) * (m + max_val);
        } else {
            sumB = (ll)m * (m + 1) / 2 + (ll)(m - 1) * max_val + (ll)(n - m) * (m + max_val);
        }
        cout << max(sumA, sumB) << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    // auto start = chrono::high_resolution_clock::now();
    // auto end = chrono::high_resolution_clock::now();
    // chrono::duration<double> duration = end - start;
    // cout << "Execution time: " << duration.count() << " seconds\n";
    return 0;
}
