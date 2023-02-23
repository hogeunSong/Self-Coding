#include <stdio.h>
#include <string.h>

int main(void)
{

	char k[20];
	int a;

	scanf("%s%d", k, &a);
	printf("나는 %s를 %d개나 먹을거야!\n", k, a);

	strcpy(k, "사과");
	printf("%s", k);

	return 0;
}