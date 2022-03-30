#include<stdio.h>

char add(int i, int j);
int sub(int i, int j);

int main(){
	int a,b,k ;
	float s = 5.5;
	
	a = 3;
	b = 4;
	
	printf("%d %d\n",a,b);
	k = add(a,b);
	printf("%d\n",k);
	
	a = 5;
	b = 6;
		printf("%d %d\n",a,b);
	printf("%d\n",add(s,b));

	a = 3;
	b = 4;
	printf("%d %d\n",a,b);
	k = sub(a,b);
	printf("%d\n",k);
	
	a = 5;
	b = 8;
		printf("%d %d\n",a,b);
	printf("%d",sub(a,b));
	
}

char add(int i, int j){
	int g[5];
	return g[5];
}
int sub(int i, int j){
	int g;
	g = i - j;
	return g;
}
