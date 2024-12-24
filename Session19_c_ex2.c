#include<stdio.h>

int main() {
	FILE *file;
	char firstChar;
	file = fopen("bt01.txt", "r");
	if (file == NULL){
		printf("Khong the mo tep de ghi. \n");
		return 1;
		}
		firstChar = fgetc(file);
		if (firstChar == EOF) {
			printf("Tep rong. \n");
			} else {
		printf("Ky tu dau tien trong tep: %c\n", firstChar);
		}
		fclose(file);
  return 0;
}

