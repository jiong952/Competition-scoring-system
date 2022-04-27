#include "include.h"



//�������� �½�ѡ������   �� 
void input ()
{
	struct AthleteScore *p,*p1;			//p���������½ڵ� 
	p1=NULL;
	p=(struct AthleteScore*)malloc(LEN);	//�����ڴ���� 
	printf("���������ѡ�� %d ��������\n",num+1);	//�������� 
	scanf("%s", &p->name);
	char judgement[10][10] = {"��ί1","��ί2","��ί3","��ί4","��ί5","��ί6","��ί7","��ί8","��ί9","��ί10"};
	for (i = 0; i < 10; i++)
	{
		printf("������ %s ������: ",judgement[i]);	//��ί 
		scanf("%f",&p->score[i]);		//������� 
	}
	num++;
	printf("¼��ɹ�!\n");	
	p->rank=num;	//��� 
	while (1)							
	{	
		if (num!=0)
		{
			p->next = head;
			head = p; 
			p1 = p;
		}
		else {
			p->next = NULL;  
			p1->next = p;
			p1 = p;
		}
		p=(struct AthleteScore*)malloc(LEN);	//�����ڴ���� 
		printf("���������ѡ�� %d ������(����0�˳�): ",num+1);
		scanf("%s",&p->name);
		if(strcmp(p->name,"0")==0) 
			break;
		for(j=0;j<10;j++)							
		{
			printf("������ %s ������: ",judgement[j]);
			scanf("%f",&p->score[j]);
		} 
		printf("¼��ɹ�!\n");
		num++;		//¼��ɹ���ѡ������+1 
		p->rank=num;	//��� 
	}

	free(p);	//�ͷ��ڴ� 
}
//ɾ��ѡ�ֽ��� 
struct AthleteScore *del(struct AthleteScore *head,char name[])
{
    struct AthleteScore *p1,*p2;	
    if(head==NULL)
	{
    printf("û��ѡ������\n");	//δ����ѡ�����ݱ�����ʾ 
    return head ;      
    }
    p1=head;
    while(strcmp(name,p1->name)!=0&&p1->next!=NULL)	//���������ɾ��ѡ���Ƿ���� 
	{
        p2=p1;
        p1=p1->next;	//�ƶ��ڵ� 
    }
    if(strcmp(name,p1->name)==0)
	{
        if(p1==head)
			head=p1->next;   //p1ָ��ͷָ�룬��ѵڶ�������λ�ø�head 
		else 
            p2->next=p1->next;		//����Ŀ��ڵ� 
        printf("delete:%s\n",name);	
        num=num-1;			//ѡ����Ŀ��1 
        char del_name[100];			//del_nameΪɾ��ѡ������
        printf("��ɾ��%sѡ��!\n",del_name);	//��ʾɾ���ɹ���Ϣ
        num--;
    }
	else printf("δʶ�𵽸�ѡ��!\n");
    return head;
}

//�ɼ����� 
struct AthleteScore *rank (struct AthleteScore *head)
{	
	struct AthleteScore *p1;
	p1=head;
	//��ƽ���� 
	float max,min,total=0.0 , avgtotal=0.0;			//total���ܷ�   avgtotal������ƽ���ɼ�
	for(i=0;i<num;i++)
	{	max=p1->score[0];
		min=p1->score[0];
		total=0.0;
	for(j=0;j<10;j++)
	{	
		if(p1->score[j]>max)
			max=p1->score[j];
		if(p1->score[j]<min)
			min=p1->score[j];
		total+=p1->score[j];	
	} 
	avgtotal=(total-max-min)*1.0/8.0;
	p1->avgtotal=avgtotal;
	p1=p1->next;
	}
	//��ƽ��������
    struct AthleteScore *p,*pre,*temp,*tail;
	tail = NULL;
	//�ڵ㽻��
	while( head->next != tail ){
     pre= head;
     p = head->next;
    while( p->next != tail ){
         if( p->avgtotal > p->next->avgtotal ){
              temp = p->next;
              pre->next = p->next;
                p->next = p->next->next;
                pre->next->next = p;
                p = temp;
            }// �ڵ����
            p = p->next;
            pre= pre->next;
        }
        tail = p;
    }

  
}

//�������� 
struct AthleteScore *search(struct AthleteScore *head, char name[])
{	
	struct AthleteScore s[50]; 
	FILE *fp;		//�ļ�ָ�� 
	fp=fopen("playerGrade.dat","r");
	if(fp==NULL)
	{
		printf("�˼�¼������,�޷����!\n");
		return ;
	}
	j=0;
	while(feof(fp)==0)
		{
			fscanf(fp,"%s%d%f",&s[j].name,&s[j].rank,&s[j].avgtotal);	
			j++;
		}
	t=0;
	for(i=1;i<=50;i++)
	   {
	   	if(strcmp(s[i].name,name)==0)
		   {t=1;
		   	printf("����\t����\t���ճɼ�\n");	//��ͷ 
			printf("%s\t%d\t%f\n",s[i].name,s[i].rank,s[i].avgtotal);	//ѡ����Ϣ 
		   }
	   }
	if(t=0) printf("�Ҳ�����ѡ��\n"); 	//����������Ϣ���� 
	fclose(fp);
	return head;
}

//�����ʼ�ɼ� 
void show_Original(struct AthleteScore *head) 
	{
		struct AthleteScore *p = head;	//pָ��ͷָ�� 
		printf("����\t���\t  ��ί1  ��ί2 ��ί3  ��ί4 ��ί5  ��ί6 ��ί7  ��ί8 ��ί9  ��ί10 \n");	//��ͷ 
		for (i = 0; i < num; i++)		//������֣���ţ����� 
		{
			printf("%s\t", p->name);
			printf("%d\t", p->rank);
			for (j = 0; j < 10; j++)
			{
				printf("%f,", p->score[j]);
			}
			printf("\n");
			p = p->next;
		}
	
	}
	
//������ճɼ� 
void show_Grade(struct AthleteScore *head) 
	{		
	struct AthleteScore *p1=head;	//p1ָ��ͷָ�� 
	printf("����\t����\t���ճɼ�\n");	//��ͷ 
	for (i=0; i<num; i++)	//������֣����������ճɼ� 
		{
			printf("%s\t", p1->name);
			printf("%d\t", p1->rank);
			printf("%f\n", p1->avgtotal);
			p1 = p1->next;
		}
	}
