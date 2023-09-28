#include <stdio.h>
#define ll long long int
int main(){
	ll n;
	scanf("%lld", &n);
	ll ans = 0; ll bonus = 50;
	for(int i = 0; i < n; i++){
		ll damage = 100; //reset damage to 100 every loop or every hit
		damage = damage + (i * bonus);
		ans = ans + damage;
	}
	printf("%lld\n", ans);
	return 0;
}
