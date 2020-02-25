#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    int i, n;
    string in, out;
    while(getline(cin, in)){
        out = "";
        int size = in.size();
        int pos = 0, j = 0;
        for(i = 0; i < size; i++){
            if(in[i] == '['){
                    pos = -1;
                    j = 0;
            }
            else if(in[i] == ']'){
                pos = 0;
            }
            else if(pos == 0){
                out += in[i];
            }
            else{
                        out.insert(out.begin() + j, in[i]);
                        j++;
            }
        }
        cout << out << endl;
    }
    return 0;
}
