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

void solve(){
    test_case{
        int n;
        cin >> n;
        bool f =false;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x;
            if(x == 100)f = true;
        }
        if(f)cout << "YES\n";
        else cout << "NO\n";
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
