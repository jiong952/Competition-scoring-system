#ifndef _JSHZT_H_
#define _JSHZT_H
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include<string.h>
#include<windows.h>
#define LEN sizeof(struct AthleteScore )

extern int i,j,t,num;		//i,j����ѭ����numΪ������ ,t�Ǳ�־����
extern char name[100];
extern time_t now;//ϵͳʱ��
extern struct AthleteScore *head;	//ͷָ�� 

struct AthleteScore
{
	char name[100]; 	//����
	float score[10]; 	//����ί���ĳɼ�
	float avgtotal; 	//���ճɼ�
	int rank;			//����
	struct AthleteScore *next; //�ڵ�
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
