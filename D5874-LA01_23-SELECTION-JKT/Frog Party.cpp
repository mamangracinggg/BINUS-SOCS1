#include <stdio.h>
#define ll long long int
int main(){
	ll t, n, m;
	scanf("%lld", &t);
	for(int i = 1; i <= t; i++){
		scanf("%lld %lld", &n, &m);
		if((n * m)%2 == 1){
			printf("Case #%lld: Need more frogs\n", i);
		}else{
			printf("Case #%lld: Party time!\n", i);
		}
	}
	
	return 0;
}
