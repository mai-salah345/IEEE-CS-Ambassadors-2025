#include <stdio.h>

void average(double x[], int y);

int main()
{
    int len;
    scanf("%d", &len);

    double arr[len];
    for (int i = 0; i < len; i++) {
        scanf("%lf", &arr[i]);
    }

    average(arr, len);
    return 0;
}

void average(double x[], int y) {
    double sum = 0;
    for (int i = 0; i < y; i++) {
        sum += x[i];
    }
    double ave = sum / y;
    printf("%.6lf\n", ave);
}
