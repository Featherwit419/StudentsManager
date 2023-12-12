#ifndef HEAD
#include "head.h"
#endif
int SaveDates(struct Student* p){
	struct Student* head=p;
	char name[10];					//文件名 
	int num;						//数据的数目 
	while(1){ 
		if(head->num==0){
			num=head-p;
			break;
		}
		head++;
	}
	head=p;
	printf("请输入文件名，请带后缀,文件名重复会覆盖原有数据\n");
	scanf("%s",name); 
	freopen(name,"w",stdout);
	printf("%d\n",num);
	while(1){
		if(head->num!=0){
			printf("%d %s %s %d %d %d %d %d %d %d %d %d %d %f %f %f %f %f %f %f %f %f %f\n",head->num,head->name,head->classes,head->score[0],head->score[1],head->score[2],head->score[3],head->score[4],head->score[5],head->score[6],head->score[7],head->score[8],head->score[9],head->credit[0],head->credit[1],head->credit[2],head->credit[3],head->credit[4],head->credit[5],head->credit[6],head->credit[7],head->credit[8],head->credit[9]);
			head++;
		}else{
			break;
		}
	}
}
