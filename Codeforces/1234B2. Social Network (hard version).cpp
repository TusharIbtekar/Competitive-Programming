#include<bits/stdc++.h>
using namespace std;
map <long long, long long> mp;
long long ar[200005];
deque <long long> dq;
int main()
{
    long long n, i, k, d;
    scanf("%lld %lld", &n, &k);
    for(i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(i = 0; i < n; i++)
    {
        if(!mp[ar[i]])
        {
            dq.emplace_front(ar[i]);
            mp[ar[i]]++;
        }
        if(dq.size() > k)
        {
            mp[dq[dq.size()-1]]--;
            dq.pop_back();
        }

    }
    if(dq.size() > k)
        {
            mp[dq[dq.size()-1]]--;
            dq.pop_back();
        }
    cout << dq.size() << endl;
    for(i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
}
