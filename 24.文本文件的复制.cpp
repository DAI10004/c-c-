#include <stdio.h>

int main() {
	FILE* source, * target;
	char sourceFile[100], targetFile[100];
	printf("输入源文件名：");
	scanf("%s", sourceFile);
	printf("输入目标文件名：");
	scanf("%s", targetFile);
	source = fopen(sourceFile, "r");
	if (source == NULL) {
		printf("无法打开源文件。\n");
		return 1;
	}

	target = fopen(targetFile, "w");
	if (target == NULL) {
		fclose(source);
		printf("无法创建目标文件。\n");
		return 1;
	}

	char ch;
	while ((ch = fgetc(source)) != EOF) {
		fputc(ch, target);
	}

	fclose(source);
	fclose(target);
	printf("文件复制成功。\n");
	return 0;
}