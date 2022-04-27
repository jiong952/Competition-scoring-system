#include "include.h"
//�����ʼ���� 
void saveFile_Original(struct AthleteScore *head)
{
	struct AthleteScore *p=head;	//pָ��ͷָ�� 
	char s[100] ={ "����\t���\t  ��ί1  ��ί2 ��ί3  ��ί4 ��ί5  ��ί6 ��ί7  ��ί8 ��ί9  ��ί10\n" };	//��ͷ 
	FILE *fp; 	//�ļ�ָ�� 
	fp=fopen("playerOriginal.dat","w");		//��������д���ļ�
	if(!fp)
		{
			printf("cannot open this file!\n");
			exit(0);			//�޴��ļ��򷵻� 
		}
	else
	{
		fprintf(fp, "%s", s);		//д���ͷ 
		i=0;
		while (p!= NULL)	//���֣����������� 
		{
			fprintf(fp, "%s\t", p->name);
			fprintf(fp, "%d\t", p->rank);
			for (i = 0; i < 10; i++)
			{
				fprintf(fp, "%f", p->score[i]);
			}
		
			fprintf(fp, "\n");
			p=p->next;	//�ƶ��ڵ� 
		}
		fclose(fp);
		printf("���ݱ���ɹ�!\n");	
	}
}
//������������ 
void saveFile_Grade(struct AthleteScore *head)
{
	FILE *fp;	//�ļ�ָ�� 
 	struct AthleteScore *p=head;	//pָ��ͷָ�� 
	fp=fopen("playerGrade.dat","w");		//��������д���ļ�
	if(!fp)
	{
		printf("cannot open this file!\n");	  //���ļ����� 
		exit(0);
	}
	else
	{
	i=0;
	while (p != NULL)	//�������֣����������ճɼ� 
	{
		fprintf(fp, "%s\t", p->name);
		fprintf(fp, "%d\t", p->rank);
		fprintf(fp, "%f\n", p->avgtotal);
		p=p->next;	//�ƶ��ڵ� 
	}
	fclose(fp);
	printf("���ݱ���ɹ�!\n");
	}
}
