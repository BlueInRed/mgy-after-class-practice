#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct student {
    string gender;
    double tall;
};

student male[105];
student female[105];
int n, cnt_male, cnt_female;

void inp() {
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        string _gender;
        double _tall;
        cin >> _gender >> _tall;

        if (_gender == "male") {
            male[++cnt_male].gender = _gender;
            male[cnt_male].tall = _tall;
        }
        else {
            female[++cnt_female].gender = _gender;
            female[cnt_female].tall = _tall;
        }
    }
}

bool cmp_male(student x, student y) {
    return x.tall < y.tall;
}

bool cmp_female(student x, student y) {
    return x.tall > y.tall;
}

void pri() {
    for (int i=1; i<=cnt_male; i++)
        printf("%.2lf ", male[i].tall);
    for (int i=1; i<=cnt_female; i++)
        printf("%.2lf ", female[i].tall);
}

void work() {
    sort(male + 1, male + cnt_male + 1, cmp_male);
    sort(female + 1, female + cnt_female + 1, cmp_female);
    
    pri();
}

int main(void) {
    inp();
    work();

    return 0;
}