#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bruteforce() {

}

void generatePassword(int type) {
	//비밀번호 유형: 숫자
	for (int g = 0; g < 5; g++) {
		for (int h = 0; h < 10; h++) {
			char *password = "";
			for (int i = 0; i < g + 4;i++) {
				char c = (rand() % 9) + 48;
				password[i] = c;
				printf("3");
				printf("%c",c);
				printf("4");
			}
			password[g + 4] = "\0";
			printf("%s\n", password);
		}
	}
}

int main(void) {
	char* str = "hello";
	char* h = "s";
	printf("%s, %s", str,h);
	
	char* ptr = str[0];
	
	printf("%s", str);
	for (int i = 1; i <= 1;i++) {
		generatePassword(i);
	}

}