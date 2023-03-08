#include <stdio.h>
#include <iso646.h>
typedef struct {
    int h, m;
} TicTac;

int time2min(TicTac t) {
    return t.h * 60 + t.m;
}

TicTac min2time(int min) {
    TicTac r = {(min / 60) % 12, min % 60};
    return r;
}

// показание времени а через min минут
TicTac after(TicTac a, int min) {
    a.m += min;
    if (a.m >= 60) {
        a.h += a.m / 60;
        a.m %= 60;
    }
    if (a.h >= 12)
        a.h %= 12;
    return a;
}

// перевод времени t на q.h часов и q.m минут
void forward(TicTac *t, TicTac q) {
    t->h += q.h;
    t->m += q.m;
    if (t->m >= 60) {
        t->h += t->m/60;
        t->m %= 60;
    }
    if (t->h >= 12)
        t->h %= 12;
}


// перевод назад времени t на q.h часов и q.m минут
void backward(TicTac *t, TicTac q) {
    t->h -= q.h;
    t->m -= q.m;
    if (t->m >= 60) {
        t->h += t->m/60;
        t->m %= 60;
    }
    if (t->h >= 12)
        t->h %= 12;
}

// проверка равенства времён
int isEqualTime(TicTac a, TicTac b) {
    if (a.h == b.h and a.m == b.m)
        return 1;
    return 0;
}

// вывод времени в формате hh:mm
void printTic(TicTac a) {
    printf("%02d:%02d", a.h, a.m);
}

int main(void) {

    TicTac t = {10, 32};
    TicTac q = {2, 10};
    forward(&t, q);
    printTic(t);
    return 0;
}