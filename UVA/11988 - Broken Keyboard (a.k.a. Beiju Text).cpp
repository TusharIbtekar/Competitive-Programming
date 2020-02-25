#include<bits/stdc++.h>
#include<string>
using namespace std;
char ar[100009];
int main()
{
    //std::ios_base::sync_with_stdio(false);
    string z;

    long long int i, l;
    while(scanf("%s", ar) != EOF)
    {
        z = string(ar, strlen(ar));
        string x, y;
        bool test = false;
        l = z.size();
        for(i = 0; i < l; i++)
        {
            if(z[i] == '[')
            {
                test = true;
                y = x + y;
                x = "";
            }
            else if(z[i] == ']')
            {
                test = false;
                y = x + y;
                x = "";
            }

            else if(test)
                x += z[i];
            else
                y += z[i];
        }
        y = x + y;
        //cout << y << "\n";
        printf("%s", y.c_str());
        printf("\n");
    }
    return 0;
}
