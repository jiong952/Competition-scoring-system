#include "include.h"
//保存初始数据 
void saveFile_Original(struct AthleteScore *head)
{
	struct AthleteScore *p=head;	//p指向头指针 
	char s[100] ={ "姓名\t编号\t  评委1  评委2 评委3  评委4 评委5  评委6 评委7  评委8 评委9  评委10\n" };	//表头 
	FILE *fp; 	//文件指针 
	fp=fopen("playerOriginal.dat","w");		//创建或者写入文件
	if(!fp)
		{
			printf("cannot open this file!\n");
			exit(0);			//无此文件则返回 
		}
	else
	{
		fprintf(fp, "%s", s);		//写入表头 
		i=0;
		while (p!= NULL)	//名字，排名，分数 
		{
			fprintf(fp, "%s\t", p->name);
			fprintf(fp, "%d\t", p->rank);
			for (i = 0; i < 10; i++)
			{
				fprintf(fp, "%f", p->score[i]);
			}
		
			fprintf(fp, "\n");
			p=p->next;	//移动节点 
		}
		fclose(fp);
		printf("数据保存成功!\n");	
	}
}
//保存最终数据 
void saveFile_Grade(struct AthleteScore *head)
{
	FILE *fp;	//文件指针 
 	struct AthleteScore *p=head;	//p指向头指针 
	fp=fopen("playerGrade.dat","w");		//创建或者写入文件
	if(!fp)
	{
		printf("cannot open this file!\n");	  //无文件返回 
		exit(0);
	}
	else
	{
	i=0;
	while (p != NULL)	//输入名字，排名，最终成绩 
	{
		fprintf(fp, "%s\t", p->name);
		fprintf(fp, "%d\t", p->rank);
		fprintf(fp, "%f\n", p->avgtotal);
		p=p->next;	//移动节点 
	}
	fclose(fp);
	printf("数据保存成功!\n");
	}
}
