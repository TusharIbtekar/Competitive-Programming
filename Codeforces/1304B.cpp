#include<bits/stdc++.h>
using namespace std;
 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define eb emplace_back
#define ll long long
#define nl '\n'
#define in() ( { int a ; scanf("%d",&a); a; } )
 
const int N = 3e5 + 9;
const int mod = 1e9 + 7;
//int dx[]={1,0,-1,0,1,-1,-1,1};
//int dy[]={0,1,0,-1,1,1,-1,-1};
vector<string>v;
int main()
{
    int n, m, i, j;
    cin >> n >> m;
    string s, l = "", r = "", temp;
    for(i = 0; i < n; i++){
        cin >> s;
        v.eb(s);
    }
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            temp = v[j];
            reverse(temp.begin(), temp.end());
            //cout << temp << endl;
            if(v[i] == temp && temp != "*"){
                l += v[i];
                r += v[i];
                v[i] = "*", v[j] = "*";
                break;
            }
        }
    }
    bool f = 0;
    for(i = 0; i < n; i++){
        if(v[i] != "*"){
            temp = v[i]; f = 0;
            for(j = 0; j < m/2; j++){
                if(temp[j] != temp[m-1-j]){
                    f = 1;
                    break;
                }
            }
            if(!f){
                l += v[i];
                break;
            }
        }
    }
    reverse(r.begin(), r.end());
    cout << l.size()+r.size() << nl;
    cout << l+r << nl;
}