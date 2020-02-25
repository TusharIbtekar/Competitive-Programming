#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll w, l, area = 0, n, mw, ml;
    cin >> mw;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> w >> l;
        area += w*l;
    }
    ml = area/mw;
    cout << ml << endl;
    return 0;
}
