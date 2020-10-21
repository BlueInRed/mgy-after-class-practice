#include <cstdio>

const int MAXN = 1000000 + 50;
const int MOD = 1000;

int f[MAXN];

void calc_fib() {
    f[1] = 1;
    f[2] = 1;

    for (int i=3; i<=MAXN - 5; i++)
        f[i] = (f[i - 1] % MOD + f[i - 2] % MOD) % MOD;
}

void inp_pri() {
    int x;
    scanf("%d", &x);

    printf("%d\n", f[x] % MOD);
}

int main(void) {
    calc_fib();

    int n;
    scanf("%d", &n);

    while (n--)
        inp_pri();

    return 0;
}