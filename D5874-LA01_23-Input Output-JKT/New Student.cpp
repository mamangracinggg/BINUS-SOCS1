#include <stdio.h>
int main(){
	char name[105];//contains alphabets and spaces according to sample input
	char nis[15];
	int age;
	scanf("%[^\n]\n", &name);
	scanf("%s\n", &nis);
	scanf("%d", &age);
	printf("Name: %s\n", name);
	printf("NIS: %s\n", nis);
	printf("Age: %d\n", age);
	return 0;
}
