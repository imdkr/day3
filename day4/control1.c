#include<stdio.h>

int main11() {
	// ���(control flow) : ���ǹ�, �ݺ���, �б⹮ ...
	// ���ǹ� : if, switch
	// �ݺ��� : while, for
	// ��Ÿ��� : bread, contiune, goto

	// break : �ݺ��� ������, switch�� ������
	// continue : �ݸ� ������ ���ư���

	// ���� 140p break
	int num;

	while (1)
	{
		printf("-1 �Է½� ����:");
		scanf("%d", &num);
		if (num == -1) {
			break;			// �긦 ������ �ݺ��� ��� ����
			printf("�� �ڵ�� Dead Code �Դϴ�.\n");
		}
	}

	// ���� 141p continue
	// �ݺ��� 1ȸ�� ���  (�ؿ� �ڵ�� ���̻� �������� �ʰ� ���� �ö�)
	for (int n = 1; n <= 5; n++) {
		if (n == 3) {
			continue;		// �긦 ������ ()�� �ö���
		}
		printf("%d ", n);
	}


	return 0;
}