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
char oil[101][101];
bool vis[101][101];
int n, m;

bool valid(int i, int j)
{
    if(i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return false;
}
void fill(int i,int j)
{
    if(!valid(i, j))
        return;
    if(oil[i][j] == '@' && !vis[i][j]){
        vis[i][j] = 1;
        for(int k = 0; k < 8; k++){
            fill(i+dx[k], j+dy[k]);
        }
        // fill(i-1, j);
        // fill(i+1, j);
        // fill(i, j-1);
        // fill(i, j+1);
    }
    
}

int main()
{
    int i, j;
    while(1)
    {
        cin >> n >> m;
        if(!n && !m)
            break;
        int cnt = 0;
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
            {
                cin >> oil[i][j];
            }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(oil[i][j] == '@' && !vis[i][j]){
                    cnt++;
                    fill(i, j);
                }
            }
        }
        cout << cnt << endl;
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
            {
                oil[i][j] = 0;
                vis[i][j] = 0;
            }

    }
}