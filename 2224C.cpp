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
        int n; cin >> n;
        string a, b;
        cin >> a >> b;
        int t_o = 0;
        for(char c : a) if(c == '(') t_o++;
        for(char c : b) if(c == '(') t_o++;
        if(t_o != n){
            cout << "NO\n";
            continue;
        }
        int bal_a = 0, bal_b = 0;
        bool ok = true;
        for(int i = 0; i < n; i++){
            char x = a[i], y = b[i];
            if(x == y){
                if(x == '('){ 
                    bal_a++; 
                    bal_b++;
                }
                else{
                    bal_a--; 
                    bal_b--;
                }
            }else{
                if(bal_a <= bal_b){
                    bal_a++;
                    bal_b--;
                } else {
                    bal_b++;
                    bal_a--;
                }
            }
            if(bal_a < 0 || bal_b < 0){
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
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
