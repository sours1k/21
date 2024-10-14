#include <math.h>
#include <stdio.h>
#define NMAX 30

int input(int *a, int *n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int *a, int n);

int main() {
    int n, data[NMAX];
    if (input(data, &n) != 1) {
        output_result(data, n);

    } else {
        printf("n/a");
    }
    return 0;
}

int input(int *a, int *n) {
    if (scanf("%d", n) && *n <= 30 && *n > 0) {
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

double mean(int *a, int n) {
    double sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

double variance(int *a, int n) {
    double sum = 0;
    double expect = mean(a, n);
    int i;

    for (i = 0; i < n; i++) {
        sum += (a[i] - expect) * (a[i] - expect);
    }
    return sum / n;
}

void output_result(int *a, int n) {
    double meanv_v = mean(a, n);
    double var_v = variance(a, n);

    double sigma1 = meanv_v + 3 * sqrt(var_v);
    double sigma2 = meanv_v - 3 * sqrt(var_v);

    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] >= meanv_v && a[i] <= sigma1 && a[i] >= sigma2 && a[i] != 0) {
            temp = a[i];
        }
    }
    printf("%d", temp);
}