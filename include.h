#ifndef _JSHZT_H_
#define _JSHZT_H
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>
#include<windows.h>
#define LEN sizeof(struct AthleteScore )

extern int i,j,t,num;		//i,j用于循环，num为计数器 ,t是标志变量
extern char name[100];
extern time_t now;//系统时间
extern struct AthleteScore *head;	//头指针 

struct AthleteScore
{
	char name[100]; 	//姓名
	float score[10]; 	//各评委给的成绩
	float avgtotal; 	//最终成绩
	int rank;			//排名
	struct AthleteScore *next; //节点
};
struct AthleteScore *search(struct AthleteScore *head, char name[]);
void show_Original(struct AthleteScore *head);
void show_Grade(struct AthleteScore *head) ;
void saveFile_Original(struct AthleteScore *head);
void Menu_manager();
void Menu_player();
void Welcome();
void Choose();
int Login();
void saveFile_Grade(struct AthleteScore *head);
void input ();
struct AthleteScore *del(struct AthleteScore *head,char name[]);
struct AthleteScore *rank (struct AthleteScore *head); 

#endif
