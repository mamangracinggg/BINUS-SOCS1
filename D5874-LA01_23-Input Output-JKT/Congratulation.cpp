#include <stdio.h>
int main(){
	char name[105];
	scanf("%[^\n]", &name);
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);
	return 0;
}
