#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long long int>st;
    ios_base :: sync_with_stdio(false);
    long long int t, a, b, c, ans = 0, cs = 0, asn = 0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        st.insert(a);
        st.insert(b);
        st.insert(c);
        set<long long int> :: iterator it;
        it = st.begin();
        ans = (*it)*(*it);
        it++;
        ans += (*it)*(*it);
        it++;
        asn = (*it)*(*it);
        cout << "Case " << ++cs;
        if(asn == ans)
            cout << ": yes" << endl;
        else
            cout << ": no" << endl;
        st.clear();
    }
}
