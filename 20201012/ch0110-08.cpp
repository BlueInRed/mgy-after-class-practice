#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct people {
    string id;
    int age, number;
};

people p[105];
int n;

void inp() {
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        cin >> p[i].id;
        scanf("%d", &p[i].age);
        p[i].number = i;
    }
}

bool cmp(people a, people b) {
    if (a.age == b.age)
        return a.number < b.number;
    if (a.age >= 60 || b.age >= 60)
        return a.age > b.age;
    return a.number < b.number;
}

void work() {
    sort(p + 1, p + n + 1, cmp);

    for (int i=1; i<=n; i++)
        cout << p[i].id << endl;
}

int main(void) {
    inp();
    work();

    return 0;
}