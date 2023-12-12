#ifndef HEAD
#include "head.h"
#endif
int ReadDates(struct Student* p){
	int line_len;					//数据个数 
	char name[10];					//文件名 
	struct Student* head=p;
	while(1){						//定义尾部 
		if(head->num==0){
			break;
		}
		head++;
	}
	printf("请输入需要读入的文件名,带后缀\n");
	scanf("%s",name);
	freopen(name,"r",stdin);		//批量录入 
	scanf("%d",&line_len);
	for(int i=0;i<line_len;i++){
		scanf("%d%s%s%d%d%d%d%d%d%d%d%d%d%f%f%f%f%f%f%f%f%f%f",&head->num,&head->name,&head->classes,&head->score[0],&head->score[1],&head->score[2],&head->score[3],&head->score[4],&head->score[5],&head->score[6],&head->score[7],&head->score[8],&head->score[9],&head->credit[0],&head->credit[1],&head->credit[2],&head->credit[3],&head->credit[4],&head->credit[5],&head->credit[6],&head->credit[7],&head->credit[8],&head->credit[9]);
		head++;
	}
	freopen("CON","r",stdin);		//重定向 
	return 0;
}
