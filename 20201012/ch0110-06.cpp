#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n, a[15];
int v1[15], v2[15];
int cnt1, cnt2;

void inp() {
    for (int i=1; i<=10; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 != 0)
            v1[++cnt1] = a[i];
        else
            v2[++cnt2] = a[i];
        
    }
}

bool cmp(int x, int y) {
    return x > y;
}

void pri() {
    for (int i=1; i<=cnt1; i++)
        printf("%d ", v1[i]);
    for (int i=1; i<=cnt2; i++)
        printf("%d ", v2[i]);
}

void work() {
    sort(v1 + 1, v1 + cnt1 + 1, cmp);
    sort(v2 + 1, v2 + cnt2 + 1);

    pri();
}

int main(void) {
    inp();
    work();

    return 0;
}