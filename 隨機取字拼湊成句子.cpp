#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
const char *article[] = {"the", "a", "some","one","any"};
const char *noun[] = {"boy", "girl", "town","dog","car"};
const char *verb[] = {"drove", "jumped", "ran","walked","skipped"};
const char *preposition[] = {"to", "from", "over","under","on"};
char sentences[100];
int main(){
	int i;
	srand(time(NULL));
	int a;
	for(i=0;i<20;i++){
		a=(rand()%5);
		strcat(sentences,article[a]);
		if(i==0){
			sentences[0]-=32;
		}
		strcat(sentences," ");
		a=(rand()%5);
		strcat(sentences,noun[a]);
		strcat(sentences," ");
		a=(rand()%5);
		strcat(sentences,verb[a]);
		strcat(sentences," ");
		a=(rand()%5);
		strcat(sentences,preposition[a]);
		strcat(sentences," ");
		a=(rand()%5);
		strcat(sentences,article[a]);
		strcat(sentences," ");
		a=(rand()%5);
		strcat(sentences,noun[a]);
		if(i==19){
			strcat(sentences,".");
		}
		printf("%s\n",sentences);
		sentences[0]='\0';
	}
}
