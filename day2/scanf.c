#include <stdio.h>

int main1() {
	char str[100];
	int num;
	double dnum;
	char chr;


	printf("������ �Է��ϼ���>>");		// ��� printf
	scanf("%d", &num);				//�Է� scanf
	printf("�Է��� ���� %d �Դϴ�. \n", num);

	printf("���ڿ� �Է��ϼ���>>");		// ���ڿ��� &��ȣ ����
	scanf("%s", str);
	printf("�Է��� ���� %s �Դϴ�. \n", str);

	printf("�Ǽ��� �Է��ϼ��� >> ");		// ��� printf
	scanf("%lf", &dnum);					// �Է� scanf
	printf("�Է��� ���� %lf �Դϴ�. \n", dnum);

	rewind(stdin);		// scanf �����Է� ���׶����� ���ۺ���
	printf("���ڸ� �Է��ϼ���>>");		// ��� printf
	scanf("%c", &chr);					// �Է� scanf
	printf("�Է��� ���� %c �Դϴ�. \n", chr); // cher�� �ѱ��� �Ұ��� (�ѱ��� ���� 2�� ������)

	return 0;
}