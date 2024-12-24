#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * Compile with clang: clang demo.c -o demo
 * Compile with gcc: gcc -fno-stack-protector demo.c -o demo
 */
void allow_login() {
	printf("User logged in!\n");
}

int main(void) {	
	int authenticated = 0;
	char password[8];

	printf("Please enter the password:");
	scanf("%s", password);

	if (strcmp(password, "P@SSW0RD") == 0) {
		authenticated = 1;
	}

	if (authenticated) {
		allow_login();
	} else {
		printf("Failed to login.\n");
	}

	
	return 0;
}
