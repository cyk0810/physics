#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()

{
    //0 변수 선언
    double v0 = 0.0;  // 초기속도 (m/s)
    double theta_deg = 0.0; // 각도 (도)
    double g = -9.8;  // 중력가속도 (m/s^2)

    //1 각도 입력
    printf("각도를 입력하세요 :");
    scanf_s("%lf", &theta_deg);

    //2 초기속도 입력
    printf("초기속도를 입력하세요 :");
    scanf_s("%lf", &v0);

    //3 각도 radian으로 변환
    double theta_rad = theta_deg * PI / 180.0;

    //4 초기 속도의 x, y 성분
    double v0x = v0 * cos(theta_rad);
    double v0y = v0 * sin(theta_rad);

    //5 최고점 높이
    double h_peak = (v0y * v0y) / (2 * -g);

    //6 최고점에 도달하는 시간
    double t_peak = v0y / -g;

    //7 수평 도달 거리
    double t_total = 2 * t_peak;
    double x_max = v0x * t_total;

    //8 지면 도달 시 속도 성분
    double vx_final = v0x;
    double vy_final = v0y;
    double v_final = sqrt(vx_final * vx_final + vy_final * vy_final);

    //9 결과값 출력
    printf("1) 초기속도 성분: v0x = %.2f m/s, v0y = %.2f m/s\n", v0x, v0y);
    printf("2) 최고점 높이: %.2f m\n", h_peak);
    printf("3) 최고점 도달 시간: %.2f s\n", t_peak);
    printf("4) 수평 도달 거리: %.2f m\n", x_max);
    printf("5) 지면 도달 시 속도 성분: Vx = %.2f m/s, Vy = %.2f m/s\n", vx_final, vy_final);
    printf("   속도 벡터 크기 V = %.2f m/s\n", v_final);
}