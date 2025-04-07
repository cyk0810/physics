/////////////////////////////////////////////

//벡터 합과 내적, 외적 계산프로그램(2차원) //

/////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

void main(void) {
	//0 변수 선언
	double x1 = 0.0;
	double x2 = 0.0;
	double y1 = 0.0;
	double y2 = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	double sum_x = 0.0;
	double sum_y = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;
	double pi = 3.141592;

	//1 첫 번째 벡터값 입력 받기
	printf("x1를 입력해 주세요 : ");
	scanf_s("%lf", &x1);
	printf("y1를 입력해 주세요 : ");
	scanf_s("%lf", &y1);

	//2 두 번째 벡터값 입력 받기
	printf("x2를 입력해 주세요 : ");
	scanf_s("%lf", &x2);
	printf("y2를 입력해 주세요 : ");
	scanf_s("%lf", &y2);

	//3 벡터의 합 계산
	sum_x = x1 + x2;

	sum_y = y1 + y2;

	//4 각도값 계산
	angle_radian = atan2(sum_y, sum_x);

	//5 각도값을 radian으로 계산
	angle_degree = angle_radian * 180.0 / pi;

	//6 벡터의 내적 계산
	dot_product = sum_x * sum_y * cos(angle_degree);

	//7 벡터의 외적 계산
	cross_product = sum_x * sum_y * sin(angle_degree);

	//8 결과 출력
	printf("벡터의 합: %6.2lf, %6.2lf\n", sum_x, sum_y);

	printf("벡터의 내적: %6.2lf\n", dot_product);

	printf("벡터의 외적: %6.2lf", cross_product);
}