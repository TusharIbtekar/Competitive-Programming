#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <long long int> vec;
    long long int i, n, div, tot = 0, tot2 = 0;
    cin >> n;
    for(i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            div = n/i;
            if(div != i)
            {
                //cout << div << " " << i << "----";
                tot = div*(2+(div-1)*i)/2;
                tot2 = i*(2+(i-1)*div)/2;
                if(tot == 0)
                    tot = 1;
                if(tot2 == 0)
                    tot2 = 1;
                    //cout << tot << " " << tot2 << endl ;
                vec.push_back(tot);
                vec.push_back(tot2);
            }
            else
            {
                //cout << div << " " << i << "----";
                tot = div*(2+(div-1)*i)/2;
                if(tot == 0)
                    tot = 1;
                //cout << tot << " " << tot2 << endl ;
                vec.push_back(tot);
            }
        }
    }
    sort(vec.begin(), vec.end());
    for(i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}
