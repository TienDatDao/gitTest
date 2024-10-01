#include<bits/stdc++.h>
#define ll long long
#define MX 100005
#define pathio "D:/code/put/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;
//void faster() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
// }

int a[100005];

signed main() {
    freopen(lfi);
    freopen(lfo);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << n;
    for (int i=1; i<=n; i++) {
        cout<<i*i<<'\n';
    }


    fclose(stdin);
    fclose(stdout);
    return 0;
}
