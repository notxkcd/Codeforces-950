#include<stdio.h>

int main(){
	int a,b;
	int ans = 0;
	scanf("%d %d", &a, &b);
	while (a <= b){
		b *= 2;
		a *= 3;
		ans++;
	}
	printf("%d", ans);
	return 0;
}
