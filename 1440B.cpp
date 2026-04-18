#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define test_case int t;cin >> t;while(t--)
#define f(i,n) for(int i = 0 ; i < n ; i++)
#define MOD 1000000007   //10^9 + 7 
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int,int> pi;

void solve() {
    test_case{
        int n,k;cin >> n >> k;
        ll sum = 0;
        vector<ll> arr(n*k);
        f(i,n*k)cin >> arr[i];
        int m = (n + 1) / 2;
        int step = n - m + 1;
        int pos = n * k - step;
        for (int i = 0; i < k; i++) {
            sum += arr[pos];
            pos -= step;
        }
        cout << sum << '\n';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
