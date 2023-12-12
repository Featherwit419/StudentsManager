#ifndef HEAD
#include "head.h"
#endif
int Logging(struct Student* p){
	struct Student* head=p;
	while(1){//找到数据的尾部 
		if(head->num ==0){
			break;
		}
		head++;
	}
	if(head-p+1==MAX){//检测是否溢出 
		printf("已存满");
		return 0;
	} 
	printf("输入格式\n");
	printf("学号 姓名 班级 课程1……课程10 绩点1……绩点10(有空格) \n");
	scanf("%d %s %s %d %d %d %d %d %d %d %d %d %d",&head->num,&head->name,&head->classes,&head->score[0],&head->score[1],&head->score[2],&head->score[3],&head->score[4],&head->score[5],&head->score[6],&head->score[7],&head->score[8],&head->score[9]);
	printf("录入成功\n");
	return 1; 
}
