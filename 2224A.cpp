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
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a)cin >> x;
        long long cur = 0;
        int ans = 0;
        for(int i = n-1; i >= 0; i--){
            cur += a[i];
            if(cur > 0){
                ans++;
            } else {
                cur = 0;
            }
        }
        cout << ans << "\n";
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
