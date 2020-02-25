#include<bits/stdc++.h>
using namespace std;
int tot, l1, l2, i, j, cry, toAdd, n1, n2, i_n1, i_n2, l;
string s1, s2;
int main()
{
    while(cin >> s1 >> s2)
    {

        //cin >> s1 >> s2;
        if((s1[0] == '-' || s2[0] == '-') && (s1[0] != '-' || s2[0] != '-'))
            printf("-");
        if(s1[0] == '-' && s2[0] != '-')
            s1 = s1.substr(1);
        else if(s2[0] == '-' && s1[0] != '-')
            s2 = s2.substr(1);
        else if(s1[0] == '-' && s2[0] == '-')
        {
            s1 = s1.substr(1);
            s2 = s2.substr(1);
        }
        l1 = s1.length();
        l2 = s2.length();
        vector <long long int> res(l1+l2, 0);
        i_n1 = 0;
        for(i = l1-1; i >= 0; i--)
        {
            cry = 0;
            n1 = s1[i] - '0';
            i_n2 = 0;
            for(j = l2-1; j >= 0; j--)
            {
                n2 = s2[j] - '0';
                tot = n1*n2 + cry + res[i_n1+i_n2];
                cry = tot/10;
                res[i_n1+i_n2] = tot % 10;
                i_n2++;
            }
            if(cry > 0)
                res[i_n1+i_n2] += cry;
            i_n1++;
        }
        int flag = 0;
        l = res.size()-1;
        while(res[l] == 0 && l > 0)
            l--;
        for(i = l; i >= 0; i--)
        {
            printf("%d", res[i]);
        }
        printf("\n");
    }


}
