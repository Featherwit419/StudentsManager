#ifndef HEAD
#include "head.h"
#endif
int Logging(struct Student* p){
	struct Student* head=p;
	while(1){//�ҵ����ݵ�β�� 
		if(head->num ==0){
			break;
		}
		head++;
	}
	if(head-p+1==MAX){//����Ƿ���� 
		printf("�Ѵ���");
		return 0;
	} 
	printf("�����ʽ\n");
	printf("ѧ�� ���� �༶ �γ�1�����γ�10 ����1��������10(�пո�) \n");
	scanf("%d %s %s %d %d %d %d %d %d %d %d %d %d",&head->num,&head->name,&head->classes,&head->score[0],&head->score[1],&head->score[2],&head->score[3],&head->score[4],&head->score[5],&head->score[6],&head->score[7],&head->score[8],&head->score[9]);
	printf("¼��ɹ�\n");
	return 1; 
}
