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
int dx[]={1,0,-1,0,1,-1,-1,1};
int dy[]={0,1,0,-1,1,1,-1,-1};
char v[26][26];
bool vis[26][26];
int n;

void reset()
{
    for(int i = 0; i < n; i++){
        memset(vis[i], 0, sizeof(vis));
        memset(v[i], 0, sizeof(v));
    }
}
bool valid(int i, int j)
{
    if(i >= 0 && i < n && j >= 0 && j < n){
        return true;
    }
    return false;
}
void fill(int i, int j)
{
    if(!valid(i, j)) return;
    if(v[i][j] == '1' && !vis[i][j]){
        vis[i][j] = 1;
        for(int k = 0; k < 8; k++){
            fill(i+dx[k], j+dy[k]);
        }
    }
}

int main()
{
    int i, j, cs = 0, d;
    while(scanf("%d", &n) != EOF){
        cs++;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                scanf(" %c", &v[i][j]);
            }
        }
        int cnt = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(v[i][j] == '1' && !vis[i][j]){
                    fill(i, j);
                    cnt++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", cs, cnt);
        reset();
    }
}