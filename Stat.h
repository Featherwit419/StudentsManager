#ifndef HEAD
#include "head.h"
#endif
int sum_s(int score[10]) {
	int summerya = 0;
	for (int n = 0; n < 10; n++) {
		summerya += score[n];
	}
	return summerya;
}
void  Sort(struct Student* a) {//�����һ��ѧ���ĵ�ַ��
	int ch;
	printf("=====================\n");
	printf("�ɼ�����\n");

	if (a->score[0] == 0) {
		printf("��������ɼ���\n");
		printf("=====================\n");
		getchar();
		return;
	}
	else {
		struct ranker {
			int tscore;
			char tname[50];
		};
		struct ranker lists[MAX];
		int stu = 0;
		while ((a+stu)->classes != 0) {
			lists[stu].tscore = sum_s((a+stu)->score);//�ܳɼ�
			strcpy(lists[stu].tname,(a+stu)->name);//��Ӧ������
			stu++;
		}
		int totalstu = stu;
		printf("����      ����    �ܳɼ�\n");//10.8.x
		for (int temp0 = 0; temp0 < totalstu; temp0++) {
			int nownum,hugenum=0;
			char nownam[50];
			for (int temp1 = temp0; temp1 < totalstu; temp1++) {
				if (lists[temp1].tscore >= lists[hugenum].tscore) {
					hugenum = temp1;
				}
			}
			printf("��%-3d����%-.7s %d\n",temp0+1,lists[hugenum].tname,lists[hugenum].tscore);
			nownum = lists[temp0].tscore;
			strcpy(nownam, lists[temp0].tname);
			lists[temp0].tscore = lists[hugenum].tscore;
			strcpy(lists[temp0].tname, lists[hugenum].tname);
			lists[hugenum].tscore = nownum;
			strcpy(lists[hugenum].tname, nownam);
		}
		printf("\n����q��������һ��>\n");
		printf("=====================\n");
		while (ch = getchar())if (ch == 'q')return;
	}
}

void Stat(struct Student* a) {//�����һ��ѧ���ĵ�ַ������
	system("cls");
	printf("=====================\n");
	printf("�ɼ�ͳ��\n");
	if (a->score[0] == 0) {
		printf("��������ɼ���\n");
		printf("=====================\n");
		getchar();
		return;
	}
	int stuid;
	for (stuid = 0; stuid < MAX; stuid++) {
		if ((a + stuid)->classes == 0)break;
	}
	int totalstu = stuid;//ѧ������
	for (int courseid = 0; courseid < 10; courseid++) {
		int totalf[5] = {};
		for (stuid = 0; stuid < totalstu; stuid++) {
			if ((a + stuid)->score[courseid] >= 90) {
				totalf[0] += 1;//0==90-100
			}
			else if ((a + stuid)->score[courseid] >= 80) {
				totalf[1] += 1;//1==80-89
			}
			else if ((a + stuid)->score[courseid] >= 70) {
				totalf[2] += 1;
			}
			else if ((a + stuid)->score[courseid] >= 60) {
				totalf[3] += 1;
			}
			else totalf[4] += 1;
		}
		printf("��%d�ſ�\n",courseid );
		printf("90~100��%3d�� 80~89��%3d�� 70~79��%3d�� 60~69��%3d�� 0~59��%3d��", totalf[0], totalf[1], totalf[2], totalf[3], totalf[4]);
		printf("\n90~100");
		for (int graph = 0; graph < totalf[0]; graph++) {
			printf("��");
		}
		printf("\n 80~89");
		for (int graph = 0; graph < totalf[1]; graph++) {
			printf("��");
		}
		printf("\n 70~79");
		for (int graph = 0; graph < totalf[2]; graph++) {
			printf("��");
		}
		printf("\n 60~69");
		for (int graph = 0; graph < totalf[3]; graph++) {
			printf("��");
		}
		printf("\n  0~59");
		for (int graph = 0; graph < totalf[4]; graph++) {
			printf("��");
		}
		printf("\n\n����������鿴��һ�ųɼ�->\n");
		printf("=====================\r");
		getchar();
		printf("                     \n");
	}
}
