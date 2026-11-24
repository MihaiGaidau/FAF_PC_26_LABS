#include <stdio.h>

int main(void) {
	int height;

	printf("Enter the tree height: ");
	if (scanf("%d", &height) != 1 || height < 1) {
		return 1;
	}

	for (int row = 0; row < height; row++) {
		for (int space = 0; space < height - row - 1; space++) {
			printf(" ");
		}
		for (int star = 0; star < 2 * row + 1; star++) {
			printf("*");
		}
		printf("\n");
	}

	for (int space = 0; space < height - 1; space++) {
		printf(" ");
	}
	puts("|");

	return 0;
}
