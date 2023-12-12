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
void  Sort(struct Student* a) {//传入第一个学生的地址！
	int ch;
	printf("=====================\n");
	printf("成绩排序\n");

	if (a->score[0] == 0) {
		printf("请先输入成绩！\n");
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
			lists[stu].tscore = sum_s((a+stu)->score);//总成绩
			strcpy(lists[stu].tname,(a+stu)->name);//对应的人名
			stu++;
		}
		int totalstu = stu;
		printf("排名      姓名    总成绩\n");//10.8.x
		for (int temp0 = 0; temp0 < totalstu; temp0++) {
			int nownum,hugenum=0;
			char nownam[50];
			for (int temp1 = temp0; temp1 < totalstu; temp1++) {
				if (lists[temp1].tscore >= lists[hugenum].tscore) {
					hugenum = temp1;
				}
			}
			printf("第%-3d名：%-.7s %d\n",temp0+1,lists[hugenum].tname,lists[hugenum].tscore);
			nownum = lists[temp0].tscore;
			strcpy(nownam, lists[temp0].tname);
			lists[temp0].tscore = lists[hugenum].tscore;
			strcpy(lists[temp0].tname, lists[hugenum].tname);
			lists[hugenum].tscore = nownum;
			strcpy(lists[hugenum].tname, nownam);
		}
		printf("\n按下q键返回上一级>\n");
		printf("=====================\n");
		while (ch = getchar())if (ch == 'q')return;
	}
}

void Stat(struct Student* a) {//传入第一个学生的地址！！！
	system("cls");
	printf("=====================\n");
	printf("成绩统计\n");
	if (a->score[0] == 0) {
		printf("请先输入成绩！\n");
		printf("=====================\n");
		getchar();
		return;
	}
	int stuid;
	for (stuid = 0; stuid < MAX; stuid++) {
		if ((a + stuid)->classes == 0)break;
	}
	int totalstu = stuid;//学生总数
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
		printf("第%d门课\n",courseid );
		printf("90~100：%3d人 80~89：%3d人 70~79：%3d人 60~69：%3d人 0~59：%3d人", totalf[0], totalf[1], totalf[2], totalf[3], totalf[4]);
		printf("\n90~100");
		for (int graph = 0; graph < totalf[0]; graph++) {
			printf("█");
		}
		printf("\n 80~89");
		for (int graph = 0; graph < totalf[1]; graph++) {
			printf("█");
		}
		printf("\n 70~79");
		for (int graph = 0; graph < totalf[2]; graph++) {
			printf("█");
		}
		printf("\n 60~69");
		for (int graph = 0; graph < totalf[3]; graph++) {
			printf("█");
		}
		printf("\n  0~59");
		for (int graph = 0; graph < totalf[4]; graph++) {
			printf("█");
		}
		printf("\n\n按下任意键查看下一门成绩->\n");
		printf("=====================\r");
		getchar();
		printf("                     \n");
	}
}
