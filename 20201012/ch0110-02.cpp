#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a[510];
vector <int> v;

void inp() {
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 != 0)
            v.push_back(a[i]);
    }
}

void pri() {
    for (int i=0; i<v.size() - 1; i++)
        cout << v[i] << ',';
    cout << v[v.size() - 1] << endl;
}

void work() {
    sort(v.begin(), v.end());

    pri();
}

int main(void) {
    inp();
    work();

    return 0;
}