#include<stdio.h>

int main() {
	char input[1000];
	FILE *file;
	printf("Nhap mot chuoi : ");
	fgets(input, sizeof(input), stdin);
	file = fopen("bt01.txt", "w");
	printf("Nhap mot chuoi de ghi them vao tep : \n");
	fgets(input, sizeof(input), stdin);
	file = fopen("bt01.txt", "a");
	if (file == NULL){
		printf("Khong the mo tep de ghi them. \n");
		return 1;
		}
		fputs(input, file);
		fclose(file);
		printf("Chuoi da duoc ghi them vao tep bt01.txt \n");
  return 0;
}

