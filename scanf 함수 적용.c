#include <stdio.h>
#include <string.h>

int main(void)
{

	char k[20];
	int a;

	scanf("%s%d", k, &a);
	printf("���� %s�� %d���� �����ž�!\n", k, a);

	strcpy(k, "���");
	printf("%s", k);

	return 0;
}