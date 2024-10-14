#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max_v, int min_v, double mean_v, double variance_v);

int main() {
    int n, data[NMAX];
    if (input(data, &n) != 1) {
        output(data, n);
        output_result(max(data, n), min(data, n), mean(data, n), variance(data, n));

    } else {
        printf("n/a");
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

void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
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

int max(int *a, int n) {
    int max = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int min(int *a, int n) {
    int min = n;
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

void output_result(int max_v, int min_v, double mean_v, double variance_v) {
    printf("%d %d %.6lf %.6lf", max_v, min_v, mean_v, variance_v);
}