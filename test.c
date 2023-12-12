/*
* File: homework.c
* Author: Jiadong Zhang
* Date: 2023-12-1
* ��Ŀ��CGƽ̨ ��֮����
*/
#include<stdio.h>
#include<string.h> 
#include<math.h>

#define MAXN 20

int num[MAXN]; //����������ݵ����� 


int main(){
	int n = 10;
	int sum = 0;
	double average = 0;
	for(int i = 1; i <= n; ++i){
		scanf("%d", &num[i]);
	}
	//��� 
	for(int i = 1; i <= n; ++i){
		sum = sum + num[i];
	}
	//ȡƽ��ֵ 
	average = (double)sum / n;
	double delta = 0x3f3f3f3f; //��ǰ�����ƽ��ֵ�Ĳ�ֵ 
	int ans;
	for(int i = 1; i <= n; ++i){
		if(num[i] > average && num[i] - average < delta){ //�����ǰֵ�ȴ𰸸��ţ�����´� 
			delta = num[i] - average;
			ans = i;
		}
	}
	printf("%6d%6d", num[ans], ans);
	return 0; 
}
