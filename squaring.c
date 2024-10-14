#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int *n);
void squaring(int *a, int *n);

int main() {
    int n, data[NMAX];
    if (input(data, &n) == 1) {
        printf("n/a");
        return 0;
    } else {
        squaring(data, &n);
        output(data, &n);
    }

    return 0;
}

int input(int *a, int *n) {
    if (scanf("%d", n) && *n <= 10 && *n > 0) {
        for (int *p = a; p - a < *n; p++) {
            double temp;
            if (scanf("%lf", &temp) != 1 || temp != (int)temp) {
                return 1;
            }
            *p = (int)temp;
        }
    } else {
        return 1;
    }
    return 0;
}

void output(int *a, int *n) {
    int *p = a;
    for (int i = 0; i < *n; i++) {
        printf("%d", p[i]);
        if (i < *n - 1) {
            printf(" ");
        }
    }
}

void squaring(int *a, int *n) {
    int *p = a;
    for (int i = 0; i < *n; i++) {
        p[i] = p[i] * p[i];
    }
}
