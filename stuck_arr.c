#include <stdio.h>
#include <iso646.h>
#define N 10
typedef int Type;
typedef unsigned int ui;
typedef struct {
    Type a[N];
    ui n;
} Stack;

void print(Stack st) {
    for (ui i = 0; i < st.n; i++)
        printf("%d ", st.a[i]);
    printf("\n");
}



int main(void) {
    Stack st = {{7, 4, 1}, 3};


    return 0;
}