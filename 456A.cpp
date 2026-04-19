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
    int n;
    cin >> n;
    bool ok = false;
    vector<pair<int,int>> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < n-1 ; i++){
        if(v[i].second > v[i+1].second){
            ok = true;
        }
    }
    if(ok)cout << "Happy Alex\n";
    else cout << "Poor Alex\n";
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
