#include <stdio.h>//���⼭ �����´ٴµ� ������ ����.,include:c��� �����̸�,stdio.h:�⺻ ������ ��� �ڵ� ��ġ
//printf:��� �����Լ�
//{}:�ڵ� ��,������,����������,���� ������
/*
int main(void) {
	printf("hello welcome world");

	return 0;
}
/*Ư������
* \n:����
* \t:�����
* \\:��������
\":����ǥ
\':���� ����ǥ��
\a:���Ҹ��߻�


*/
//�����Է�
/*
* 10���� ����:%d,%i
* 16���� ����:%x,%o
* 10���� �Ǽ�:%f,%lf
* �Ѱ��� ����:%c
* 10���� ����(���):%u
* �ۼ�Ʈ ��ȣ ���:%%
* */

int main(void) {
	/*
	printf("50�� 8���� ǥ��:%o\n", 50);
	printf("50�� 10���� ǥ�� : %d\n", 50);
	printf("50�� 16���� ǥ�� : %x\n", 50);

	




	int input_num;
	printf("���� �Է��Ͻÿ� : \n");
	scanf_s("%d", &input_num);
	printf("�Էµ� �������� %d �Դϴ�", input_num);

		return 0;
	
	int a;
	printf("���� a���� �Է����ּ��� : \n");
	scanf_s("%d", &a);
	int b;
	printf("���� b���� �Է����ּ��� : \n");
	scanf_s("%d",&b);
	printf("a+b=%d", a + b);
	printf("a+b=%d", a - b);
	printf("a+b=%d", a * b);
	printf("a+b=%d", a / b);
	*/


	int r;
	printf("���� �������� �Է��ϼ��� : \n");
	scanf_s("%d", &r);
	double pi = 3.14 * r;
	printf("���� ���̴� %f�Դϴ�", r * r * pi);

	return 0;
}

