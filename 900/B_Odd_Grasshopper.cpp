#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x, n;
    cin >> x >> n;

    ll d;
    switch (n % 4)
    {
    case 0:
        d = 0;
        break;
    case 1:
        d = n;
        break;

    case 2:
        d = -1;
        break;

    default:
        d = -n - 1;
        break;
    }

    if (x % 2 == 0)
    {
        cout << x - d;
    }else{
        cout << x + d;
    }
}

int main(){
    int tt;
    cin >> tt;

    while(tt--){
        solve();
        cout << "\n";
    }
}