#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    double r, theta_radian;

    printf("x, y 값을 입력하세요: ");
    scanf_s("%lf %lf", &x, &y);

    r = sqrt(x * x + y * y);
    theta_radian = atan2(y, x);

    printf("r = %lf, theta (radian) = %lf\n", r, theta_radian);
}