#include<bits/stdc++.h>
using namespace std;
deque<int>dq;
int main()
{
    ios_base :: sync_with_stdio(false);
    int n, cnt = 0, x;
    string s = "";
    cin >> n;
    while(n--)
    {
        cin >> x;
        dq.push_front(x);
    }
    int val;
    if(dq.front() < dq.back())
    {
        val = dq.front();
        s += 'R';
        dq.pop_front();
    }
    else
    {
        val = dq.back();
        s += 'L';
        dq.pop_back();
    }
    int l = 0, r = 0;
    while(dq.size())
    {
        if(val <= dq.front() || val <= dq.back())
        {
            if(val > dq.back())
            {
                s += 'R';
                val = dq.front();
                dq.pop_front();
            }
            else if(val > dq.front())
            {
                s += 'L';
                val = dq.back();
                dq.pop_back();
            }
            else if(dq.front() == val && !l)
            {
                //dq.pop_front();
                l = 1;
            }
            else if(dq.back() == val && !r)
            {
                r = 1;
                //dq.pop_back();
            }
            else if(dq.front() == dq.back())
            {
                s += 'R';
                val = dq.front();
                dq.pop_front();
                dq.pop_back();
            }
            else if(val < dq.front() && val < dq.back())
            {
                if(dq.front() < dq.back())
                {
                    s += 'R';
                    val = dq.front();
                    dq.pop_front();
                }
                else if(dq.front() > dq.back())
                {
                    s += 'L';
                    val = dq.back();
                    dq.pop_back();
                }
                else if(dq.front() == dq.back())
                {
                    s += 'R';
                    val = dq.front();
                    dq.pop_front();
                    dq.pop_back();
                }
                //cout << "HELL" << endl;
            }
            else
                break;
            cout << val << endl;
        }
        else
            break;
    }
    cout << s.size() << endl;
    cout << s << endl;
}
