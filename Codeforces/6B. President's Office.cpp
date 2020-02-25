#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <char> st;
    string s;
    vector< string >vec;
    int n, m, i, j, pos_i, pos_j, cnt = 0, flag = 0;
    char c, ci;
    cin >> n >> m >> c;
    for(i = 0; i < n; i++)
    {
        /*for(j = 0; j < m; j++)
        {
            cin >> ci;
            vec[i].push_back(ci);
            cout << "chek" << endl;
        }*/
        cin >> s;
        vec.push_back(s);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            //flag = 0;
            if(vec[i][j] == c)
            {
                for(pos_i = i; pos_i >= 0; pos_i--)
                {
                    if(vec[pos_i][j] == '.')
                        break;
                    else if(vec[pos_i][j] != c)
                    {
                        st.insert(vec[pos_i][j]);
                        break;
                    }
                }
                for(pos_i = i; pos_i < n; pos_i++)
                {
                    if(vec[pos_i][j] == '.')
                        break;
                    else if(vec[pos_i][j] != c)
                    {
                        st.insert(vec[pos_i][j]);
                        break;
                    }
                }
                for(pos_j = j; pos_j >= 0; pos_j--)
                {
                    if(vec[i][pos_j] == '.')
                        break;
                    else if(vec[i][pos_j] != c)
                    {
                        st.insert(vec[i][pos_j]);
                        break;
                    }
                }
                for(pos_j = j; pos_j < m; pos_j++)
                {
                    if(vec[i][pos_j] == '.')
                        break;
                    else if(vec[i][pos_j] != c)
                    {
                        st.insert(vec[i][pos_j]);
                        break;
                    }
                }

            }
        }
    }
    set< char > :: iterator v;
    for(v = st.begin(); v != st.end(); v++)
    {
        cout << *v;
        if(*v >= 'A' && *v <= 'Z')
            cnt++;
    }
    printf("%d", cnt);
}
