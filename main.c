
#include "ReadDates.h"
#include "SaveDates.h"
#include "Check.h"
#include "Stat.h"
#include "logging.h"
struct Student stu[MAX];	//ѧ������
void Printmenu();
int main(){
	int mark;				//�������ܵĴ���
	Printmenu();
	while(1){
	scanf("%d",&mark);
	switch(mark){
		case 0:
			return 0;
		case 1:
			Logging(stu);
			break;
		case 2:
			Check(stu);
			break;
		case 3:
			Sort(stu);
			break;
		case 4:
			Stat(stu);
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		case 8:
			
			break;
		case 9:
			
			break;
		case 10:
			
			break;
		case 11:
			
			break;
		case 12:
			
			break;
		case 13:
			SaveDates(stu);
			break;
		case 14:
			ReadDates(stu);
			break;
		case 15:
			Printmenu();
		default:
			printf("��������\n");
			break;
	}
	}
	return 0;
}
void Printmenu(){
	printf("******���ܲ˵�******\n");
	printf("**                **\n");
	printf("**0.  ��    ��    **\n");
	printf("**1.  �ɼ�¼��    **\n");
	printf("**2.  �ɼ���ѯ    **\n");
	printf("**3.  �ɼ�����    **\n");
	printf("**4.  �ɼ�ͳ��    **\n");
	printf("**5.  �ɼ�����    **\n");
	printf("**6.  �ɼ�����    **\n");
	printf("**7.  �� �� ��    **\n");
	printf("**8.  �� �� ��    **\n");
	printf("**9.  ƽ �� ��    **\n");
	printf("**10. ����߷�    **\n");
	printf("**11. ����ͷ�    **\n");
	printf("**12. ��ƽ����    **\n");
	printf("**13. ���ݱ���    **\n");
	printf("**14. ���ݶ�ȡ    **\n");
	printf("**15. �˵�����    **\n");
	printf("**                **\n");
	printf("********************\n");
}
