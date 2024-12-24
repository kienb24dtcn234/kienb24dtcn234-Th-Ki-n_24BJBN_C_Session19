#include<stdio.h>

int main() {
	char line[1000];
	FILE *file;
	file = fopen("bt01.txt", "a");
	if (file == NULL){
		printf("Khong the mo tep de ghi them. \n");
		return 1;
		}
		if(fgets(line, sizeof(line),file) !=NULL){
			printf("Dong dau tien trong tep : %s", line);
			}else{
				printf("Tep rong hoac khong the doc dong dau tien. \n");
			}
		fclose(file);
  return 0;
}

