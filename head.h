//集中的头文件，头部声明,定义。 
#include <stdio.h>
#include<Windows.h>
#include <string.h>
#define HEAD
#define MAX 100		//数组长度 
struct Student{
    int num; 		//学号
    char name[50]; 	//姓名
    char classes[20];		//班级 
    int score[10];		//课程成绩，共有10门课程
    float credit[10];	//课程学分，对应10门课程 
};
//函数统一声明 
//int Logging();//1.录入成绩
//int Check();//2.成绩查询 
//void Sort();//3.成绩排序
//void Stat();//4.成绩统计 
//int SaveDates();//13.保存数据 
//int ReadDates();//14.数据读取 
//void Printmenu();//15.菜单唤出 
