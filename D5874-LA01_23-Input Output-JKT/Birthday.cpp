#include <stdio.h>
int main(){
	char name[105];//consist of alphabets and spaces
	scanf("%[^\n]", &name);
	printf("Happy Birthday to %s.\n", name);
	return 0;
}
