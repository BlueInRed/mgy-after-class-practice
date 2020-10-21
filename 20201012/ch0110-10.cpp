#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <cstring>
using namespace std;

string str, s[1005];
int n;
map <string, bool> inserted;
vector <string> ans;

void inp() {
    bool add = false;
    getline(cin ,str);

    for(int i=0; i<str.length(); i++)
        if (str[i] != ' ') {
            if (!add) ++n, add = true;
            s[n] += str[i];
        }
        else
            add = false;
    // cout << n << endl;
    for (int i=1; i<=n; i++) 
        if (!inserted[s[i]]) {
            ans.push_back(s[i]);
            inserted[s[i]] = true;
        }
        // cout << s[i] << endl;
}

void work() {
    sort(ans.begin(), ans.end());

    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << endl;
    // cout << ans.size() << endl;
}

int main(void) {
    inp();
    work();

    return 0;
}