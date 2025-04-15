#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265
#define DEG_TO_RAD(angle) ((angle) * M_PI / 180.0)

int main() {
    //0 변수선언
    double v0 = 0.0;           // 초기 속도 (m/s)
    double angle_deg = 0.0;       // 발사 각도 (도)
    double y0 = 0.0;             // 초기 높이 (m)
    double g = -9.81;               // 중력 가속도 (m/s^2)
    //1 초기 조건
    printf("초기 속도를 입력하세요:\n");
    scanf_s("%lf", &v0);
    printf("발사 각도를 입력하세요:\n");
    scanf_s("%lf", &angle_deg);
    printf("초기 높이를 입력하세요:\n");
    scanf_s("%lf", &y0);
    //2 각도를 라디안으로 변환
    double angle_rad = DEG_TO_RAD(angle_deg);

    //3 초기 속도의 x, y 성분
    double vx = v0 * cos(angle_rad);
    double vy = v0 * sin(angle_rad);

    //4 지면에 도달할 때까지 걸리는 시간 계산
    // y = y0 + vy * t - 0.5 * g * t^2 = 0
    double a = 0.5 * g;
    double b = vy;
    double c = y0;

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("해가 존재하지 않습니다.\n");
        return 1;
    }

    double t1 = (-b + sqrt(discriminant)) / (2 * a);
    double t2 = (-b - sqrt(discriminant)) / (2 * a);
    double time = t1 > 0 ? t1 : t2;

    //5 수평 도달 거리 계산
    double distance = vx * time;
   
    //6 충돌 순간 속도 크기 계산
    double vy_final = vy + g * time;
    double v_final = sqrt(vx * vx + vy_final * vy_final);
   
    //7 충돌 순간 각도 계산 (지면과 이루는 각)
    double angle_impact_rad = atan2(vy_final, vx);
    double angle_impact_deg = angle_impact_rad * 180.0 / M_PI;
    
    //8 결과 출력
    printf("(a) 지면에 도달할 때까지 걸리는 시간: %.2f 초\n", time);
    printf("(b) 수평 도달 거리: %.2f 미터\n", distance);
    printf("(c) 충돌 순간 속도 크기: %.2f m/s\n", v_final);
    printf("(d) 충돌 순간 각도: %.2f 도\n", angle_impact_deg);
    
    
    return 0;
}