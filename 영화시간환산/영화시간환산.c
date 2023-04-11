#include <stdio.h>

void convertTime(int);
int showMenu(void);
void showEnding(void);

int main(void) {
	// �ʱ�ȭ
	int runningTime = 0;

	// �޴������ְ� �ð� �ޱ�, ���ѹݺ�, ����� -1
	while (1) {
		runningTime = showMenu();

		// �������� Ȯ��
		if (runningTime == -1) break;

		// ��ȯ�Ͽ� ���
		convertTime(runningTime);
	}

	showEnding();

	return 0;
}

void convertTime(int time) {
	int hour = time / 60; // �ð� : �� �ð��� 60���� ���� ��
	int min = time % 60; // �� : �� �ð��� 60���� ���� ������
	printf("%d�ð� %d��\n", hour, min); // ��� ���
}

int showMenu(void) {
	int a;
	printf("�ܰ� ��й�ȣ�� �Է��ϼ���(-1 �Է½� ����) : ");
	scanf_s("%d", &a);
	return a;
}

void showEnding(void) {
	printf("���α׷��� ����");
}