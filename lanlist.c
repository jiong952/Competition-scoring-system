#include "include.h"



//创建链表 新建选手资料   ？ 
void input ()
{
	struct AthleteScore *p,*p1;			//p用来开辟新节点 
	p1=NULL;
	p=(struct AthleteScore*)malloc(LEN);	//申请内存分配 
	printf("请输入参赛选手 %d 的姓名：\n",num+1);	//输入姓名 
	scanf("%s", &p->name);
	char judgement[10][10] = {"评委1","评委2","评委3","评委4","评委5","评委6","评委7","评委8","评委9","评委10"};
	for (i = 0; i < 10; i++)
	{
		printf("请输入 %s 的评分: ",judgement[i]);	//评委 
		scanf("%f",&p->score[i]);		//输入分数 
	}
	num++;
	printf("录入成功!\n");	
	p->rank=num;	//编号 
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
		p=(struct AthleteScore*)malloc(LEN);	//申请内存分配 
		printf("请输入参赛选手 %d 的姓名(输入0退出): ",num+1);
		scanf("%s",&p->name);
		if(strcmp(p->name,"0")==0) 
			break;
		for(j=0;j<10;j++)							
		{
			printf("请输入 %s 的评分: ",judgement[j]);
			scanf("%f",&p->score[j]);
		} 
		printf("录入成功!\n");
		num++;		//录入成功，选手人数+1 
		p->rank=num;	//编号 
	}

	free(p);	//释放内存 
}
//删除选手界面 
struct AthleteScore *del(struct AthleteScore *head,char name[])
{
    struct AthleteScore *p1,*p2;	
    if(head==NULL)
	{
    printf("没有选手数据\n");	//未输入选手数据报错提示 
    return head ;      
    }
    p1=head;
    while(strcmp(name,p1->name)!=0&&p1->next!=NULL)	//遍历，检查删除选手是否存在 
	{
        p2=p1;
        p1=p1->next;	//移动节点 
    }
    if(strcmp(name,p1->name)==0)
	{
        if(p1==head)
			head=p1->next;   //p1指向头指针，则把第二个结点的位置给head 
		else 
            p2->next=p1->next;		//跳过目标节点 
        printf("delete:%s\n",name);	
        num=num-1;			//选手数目减1 
        char del_name[100];			//del_name为删除选手名字
        printf("已删除%s选手!\n",del_name);	//提示删除成功信息
        num--;
    }
	else printf("未识别到该选手!\n");
    return head;
}

//成绩排序 
struct AthleteScore *rank (struct AthleteScore *head)
{	
	struct AthleteScore *p1;
	p1=head;
	//求平均分 
	float max,min,total=0.0 , avgtotal=0.0;			//total是总分   avgtotal是最终平均成绩
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
	//按平均分排序
    struct AthleteScore *p,*pre,*temp,*tail;
	tail = NULL;
	//节点交换
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
            }// 节点后移
            p = p->next;
            pre= pre->next;
        }
        tail = p;
    }

  
}

//搜索功能 
struct AthleteScore *search(struct AthleteScore *head, char name[])
{	
	struct AthleteScore s[50]; 
	FILE *fp;		//文件指针 
	fp=fopen("playerGrade.dat","r");
	if(fp==NULL)
	{
		printf("此记录不存在,无法输出!\n");
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
		   	printf("姓名\t排名\t最终成绩\n");	//表头 
			printf("%s\t%d\t%f\n",s[i].name,s[i].rank,s[i].avgtotal);	//选手信息 
		   }
	   }
	if(t=0) printf("找不到该选手\n"); 	//搜索不到信息返回 
	fclose(fp);
	return head;
}

//输出初始成绩 
void show_Original(struct AthleteScore *head) 
	{
		struct AthleteScore *p = head;	//p指向头指针 
		printf("姓名\t编号\t  评委1  评委2 评委3  评委4 评委5  评委6 评委7  评委8 评委9  评委10 \n");	//表头 
		for (i = 0; i < num; i++)		//输出名字，序号，分数 
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
	
//输出最终成绩 
void show_Grade(struct AthleteScore *head) 
	{		
	struct AthleteScore *p1=head;	//p1指向头指针 
	printf("姓名\t排名\t最终成绩\n");	//表头 
	for (i=0; i<num; i++)	//输出名字，排名，最终成绩 
		{
			printf("%s\t", p1->name);
			printf("%d\t", p1->rank);
			printf("%f\n", p1->avgtotal);
			p1 = p1->next;
		}
	}
