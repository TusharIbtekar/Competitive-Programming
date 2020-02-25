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

char c[50];
int vis[50];
string s;
deque<char>q;
int r, l, cnt;
void comb(int i)
{
    if(q.size() == r)
    {
        for(int j = 0; j < r; j++)
            printf("%c", q[j]);
        printf("\n");
        return;
    }
    for(int j = i; j < l; j++){
        if(!vis[j]){
            vis[j] = 1  ;
            q.emplace_back(s[j]);
            comb(j+1);
            vis[j] = 0;
            q.pop_back();

        }
        while(s[j] == s[j+1]) j++;

    }

}
int main()
{
    //ios_base :: sync_with_stdio(false);
    int i;
    while(scanf("%s %d", &c, &r) != EOF)
    {
        l = strlen(c);
        s = c;
        sort(s.begin(), s.end());
        comb(0);
        for(i = 0; i < 50; i++)
            vis[i] = 0;
    }
}
