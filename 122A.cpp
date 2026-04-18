#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define test_case int t;cin >> t;while(t--)
#define f(i,n) for(int i = 0 ; i < n ; i++)
 
void solve() {
    int n;
    cin >> n;
    vector<int> lucky = {
        4, 7, 44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777
    };
    for(int x : lucky){
        if(n % x == 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
