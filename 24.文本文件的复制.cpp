#include <stdio.h>

int main() {
	FILE* source, * target;
	char sourceFile[100], targetFile[100];
	printf("����Դ�ļ�����");
	scanf("%s", sourceFile);
	printf("����Ŀ���ļ�����");
	scanf("%s", targetFile);
	source = fopen(sourceFile, "r");
	if (source == NULL) {
		printf("�޷���Դ�ļ���\n");
		return 1;
	}

	target = fopen(targetFile, "w");
	if (target == NULL) {
		fclose(source);
		printf("�޷�����Ŀ���ļ���\n");
		return 1;
	}

	char ch;
	while ((ch = fgetc(source)) != EOF) {
		fputc(ch, target);
	}

	fclose(source);
	fclose(target);
	printf("�ļ����Ƴɹ���\n");
	return 0;
}