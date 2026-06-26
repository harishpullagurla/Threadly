

#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
 
#define int long long
#define mod 1000000007ll
#define INF (int)1e18
#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) c.begin(), c.end()


 
// Problem Statement
/*
 
 
 
 
*/
 
// Observations
/*
 
 



*/
 
void solve() {
    int k,m;
    cin >> k >> m;
    int start = (m/k)*k;
    int end = start + k; // the start of other interval 
    int mul = (start/k)%3;
    // cout << start << ' ' << end << endl;
    // cout << mul << endl;
    if((mul)==1)
    {
        // then i'll simply
        cout << end-m << endl;
        return;
    }
    if((mul==2))
    {
        cout << 0 << endl;
        return;
    }
    else{
        cout << end - m + k << endl;
        return;
    }






}
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}