#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// 초기화
	int runningTime = 0;

	// 메뉴보여주고 시간 받기, 무한반복, 종료시 -1
	while (1) {
		runningTime = showMenu();

		// 종료조건 확인
		if (runningTime == -1) break;

		// 변환하여 출력
		convertTime(runningTime);
	}

	showEnding();

	return 0;
}

void convertTime(int time) {
	int hour = time / 60; // 시간 : 총 시간을 60으로 나눈 값
	int min = time % 60; // 분 : 총 시간을 60으로 나눈 나머지
	printf("%d시간 %d분\n", hour, min); // 결과 출력
}

int showMenu(void) {
	int a;
	printf("단계 비밀번호를 입력하세요(-1 입력시 종료) : ");
	scanf_s("%d", &a);
	return a;
}

void showEnding(void) {
	printf("프로그램을 종료");
}