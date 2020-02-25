#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll mela_boro = 10000000005;
int main()
{
    ll n,m;
    scanf("%lld",&n);
    scanf("%lld",&m);
    ll a[n+5];
    ll b[m+5];
    map<ll,ll>mp;
   //  map<ll,ll>mp::iterator e;
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(ll i=0;i<m;i++)
        scanf("%lld",&b[i]);

    ll bro = 0;
    ll kere=0;
    for(ll i=0,bro=0;i<n;i++)
    {

        while(bro<m && b[kere]<=a[i])
            kere++;
        ll venom = a[i];
        for(ll j=kere;j<m;j++)
            mp[b[j]-venom]++;
    }
    ll boro =0;
    ll ans=0;

    for(auto e : mp)
    {
        if(e.second>boro)
        {
            boro= e.second;
            ans=mela_boro;
        }
        if(e.second==boro)
        {
            ans=min(ans,e.first);

        }

    }
    printf("%lld\n",ans);



}
