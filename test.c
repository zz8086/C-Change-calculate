#include <stdio.h>

int main() {
	int money, change;
	int sum, c1000, c500, c100;

    printf("���ǰ��� �Է��Ͻÿ� :");
	scanf("%d", &sum);
	
	printf("������ �ݾ��� �Է��Ͻÿ� :");
	scanf("%d", &money);
	
	change = money - sum;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;
	
	printf("�Ž������� ������ �����ϴ�.\n");
	
	printf("õ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);

	system("pause");
}