#include<stdio.h>

int main55() {

	int kor, eng, math, social, science;
	printf("���� ������ �Է��ϼ���.\n");
	scanf("%d", &kor);

	int sum = kor + eng + math + social + science;
	double avg = sum / 5.0;

	// switch�� �Ǽ�X
	switch ((int)avg / 10) {
	case 10:
		printf("A");
		break;
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
	}

	



	return 0;
}