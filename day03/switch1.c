#include<stdio.h>


int main5() {
	// if ~ else if ~ else
	// switch ~ case ~ break
	// switch�� : ���� ���� ã�� �� ����ϴ� ���ǹ�

	// if�� : ���� ����, ��ġ/����ġ ���� (>, ==)
	// switch�� : ��ġ���� (==)
	char word = 'a';

	//if (word == 'a') {

	//}
	//else if(word == 'b') {

	//}

	// �񱳴���� �Ǵ� ������ ()�� ���´�
	switch (word) {
	case 'a':				// word == 'a'
		printf("�ܾ�� a�Դϴ�.\n");
		break;		// case�� ������ break;
	case 'b':				// word == 'b'
		printf("�ܾ�� b�Դϴ�.\n");
		break;
	case 'c':				// word == 'c'
		printf("�ܾ�� c�Դϴ�.\n");
		break;
	default:				// ��ġ�ϴ� case�� ����
		printf("�ش��ϴ� �ܾ �����ϴ�.\n");		// else
	}
	
	// switch : ()�� ��ġ�ϴ� �ָ� ã�� 

	int num = 0;
	printf("��ȣ�� �����ϼ���>>");
	scanf("%d", &num);
	// 1~4, default
	switch (num) {
	case 1:
		printf("1�� �����߽��ϴ�\n");
			break;
	case 2:
		printf("2�� �����߽��ϴ�\n");
		break;
	case 3:
		printf("3�� �����߽��ϴ�.\n");
		break;
	case 4:
		printf("4�� �����߽��ϴ�.\n");
		break;
	default:
		printf("�ش��ϴ� �������� �����ϴ�\n");
	}


	



	return 0;
}