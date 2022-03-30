#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c,d,e;
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF){		
		if(a==0 && b==0 && c==0 && d==0)
		break;
		if(c>a&&d>b){
			e=(c-a)*60+(d-b);
			printf("%d\n",e);
		}
		else if(c>a&&b>d){
			e=(c-a)*60+(d-b);
			printf("%d\n",e);
		}
		else if(a>c&&d>b){
			e=(c-a+24)*60+(d-b);
			printf("%d\n",e);
		}
		else if(a>c&&b>d){
			e=(c-a+24)*60+(d-b);
			printf("%d\n",e);
		}
		else if(a==c&&b>d){
			e=24*60+(d-b);
			printf("%d\n",e);
		}
		else if(a==c&&d>b){
			e=d-b;
			printf("%d\n",e);
		}
		else if(a==c&&d>b){
			e=d-b;
			printf("%d\n",e);
		}
		else if(c>a&&b==d){
			e=(c-a)*60;
			printf("%d\n",e);
		}
		else if(a>c&&b==d){
			e=(c-a+24)*60;
			printf("%d\n",e);
		}
		else if(a==c&&b==d){
			e=0;
			printf("%d\n",e);
		}
	}
	return 0;
} 
