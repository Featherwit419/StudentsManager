
#include "ReadDates.h"
#include "SaveDates.h"
#include "Check.h"
#include "Stat.h"
#include "logging.h"
struct Student stu[MAX];	//学生数据
void Printmenu();
int main(){
	int mark;				//各个功能的代号
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
			printf("错误输入\n");
			break;
	}
	}
	return 0;
}
void Printmenu(){
	printf("******功能菜单******\n");
	printf("**                **\n");
	printf("**0.  退    出    **\n");
	printf("**1.  成绩录入    **\n");
	printf("**2.  成绩查询    **\n");
	printf("**3.  成绩排序    **\n");
	printf("**4.  成绩统计    **\n");
	printf("**5.  成绩计算    **\n");
	printf("**6.  成绩排名    **\n");
	printf("**7.  最 高 分    **\n");
	printf("**8.  最 低 分    **\n");
	printf("**9.  平 均 分    **\n");
	printf("**10. 班最高分    **\n");
	printf("**11. 班最低分    **\n");
	printf("**12. 班平均分    **\n");
	printf("**13. 数据保存    **\n");
	printf("**14. 数据读取    **\n");
	printf("**15. 菜单唤出    **\n");
	printf("**                **\n");
	printf("********************\n");
}
