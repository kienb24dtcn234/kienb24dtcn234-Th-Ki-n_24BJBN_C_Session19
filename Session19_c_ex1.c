#include<stdio.h>

int main() {
	char input[1000];
	FILE *file;
	printf("Nhap mot chuoi : ");
	fgets(input, sizeof(input), stdin);
	file = fopen("bt01.txt", "w");
	if (file == NULL){
		printf("Khong the mo tep de ghi. \n");
		return 1;
		}
		fputs(input, file);
		fclose(file);
		printf("Chuoi da duoc ghi vao tep bt01.txt \n");
  return 0;
}

