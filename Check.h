#ifndef HEAD
#include "head.h"
#endif
int Check(struct Student* p){
	int Num;
	struct Student* head=p;
	printf("ÇëÊäÈëÑ§ºÅ\n");
	scanf("%d",&Num);
	while(1){
		if(head->num ==Num){
			printf("%d %s %s\n",head->num,head->name ,head->classes);
			for(int i=0;i<10;i++){
				printf("%d ",head->score[i]);
			}
			printf("\n");
			break;
		}
		head++;
	}
	return 0;
}
