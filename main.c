#include "include.h"

int i,j,t,num=0;		//i,j����ѭ����numΪ������ ,t�Ǳ�־����
char name[100];
time_t now;//ϵͳʱ��
struct AthleteScore *head;	//ͷָ�� 

int main()
{	
	int i,j,num;		//i,j����ѭ����numΪ������ ,t�Ǳ�־���� 
	char name[100];
	system("color 3e");  	//��������ɫ 
	int c,a;		//c,a����switch 
	char judgement[10][10] = {"��ί1","��ί2","��ί3","��ί4","��ί5","��ί6","��ί7","��ί8","��ί9","��ί10"};		//������ί�������� 
	Welcome();			//��ӭ���� 
	system("pause");
	system("cls");
	loop:Choose();				//���ѡ�����
	printf("���������ָ��:");
	scanf("%d",&a);		
	while(a<1||a>3)			//�û������������б�����ʾ 
	{
		printf("���������������ȷָ��(1-3)\n");
		scanf("%d",&a);
		getchar();
	}
	system("cls");
	if(a==1)	//����Աѡ�� 
	{
		j=Login();    //��Login����ֵ��ֵ��j	
		if(j==1)	//�ɹ���¼����Ա 
		{ 	while(1)
			{ 
			Menu_manager();		//����Ա�˵� 
			printf("���������ָ��:\n");
			i=scanf("%d",&a);
			if(i!=1)				//��ֹ�û��������ĵ��³����� 
			{
			do{
				printf("���������������ȷָ��(0-9)��\n");
				i=scanf("%d",&a);
				fflush(stdin);
			  }while(i!=1);
			}
			while(a< 0||a>9)			//�û������������б�����ʾ 
			{
				printf("���������������ȷָ��(0-9)\n");
				scanf("%d",&a);
				getchar();
			}
			switch(a)
			{
				case 1:			//����Ա�������ֽ�� 
				{	getchar();
					printf("********����ѡ�ֳɼ�*********��\n");
					input();		//��������ͬʱ���������ѡ�ֳɼ� 
					system("pause");
					getchar();
					system("cls");
					break;	
				}	
				case  2 :			//ɾ������ѡ��  ������ɾ��
				{	getchar();
					char del_name[100];			//del_nameΪɾ��ѡ������
					printf("********ɾ������ѡ��*********��\n");
					printf("����������ѡ�ֵ����֣�����0���أ�:\n");
					scanf("%s",del_name);
					getchar();
					while(strcmp(del_name,"0")!=0)
					{	
						del(head,del_name);
						system("pause");
						getchar();
						printf("����������ѡ�ֵ����֣�������ɾ�������� 0 ��:\n");
						scanf("%s",&del_name);
					}
					system("cls");
					break;
				}	
				case 3:		//��������ѡ�� 		���������� 
				{
					getchar();
					printf("********����ѡ�ֳɼ�*********��\n");
					input();
					system("pause");
					getchar();
					system("cls");
					break;
				}
				
				
				case  4 : 		//����ԭʼ����
				{	getchar();
					saveFile_Original(head);
					system("pause");
					getchar();
					system("cls");
					break;
			 	} 
				
				case  5 :		// ��ʾ�����˶�Աԭʼ�ɼ� 
				{	getchar();
					show_Original(head);	
					system("pause");
					getchar();
					system("cls");
					break;
				} 
				
			 	case  6 : 		//��ƽ���ɼ������������Grade�ļ� 
				{	getchar();
					rank(head);		//���� 
					saveFile_Grade(head);		//����ѡ�����ճɼ� 
					system("pause");
					getchar();
					system("cls");
					break;
				}
				case  7 ://��ʾ���ճɼ� 
				{
					getchar();
					show_Grade(head);
					system("pause");
					getchar();
					system("cls");
					break;	
				}
				case  8 : 		//����ѡ��������ɼ�
				{	getchar();
					printf("�������ѯѡ�ֵ�����:\n");
					scanf("%s",name);	
					getchar();			
					search(head,name);
					system("pause");
					getchar();
					system("cls");
					break;
				}
				case  9:	//��ת��ѡ����ݲ˵� 
				{
					system("pause");
					system("cls");
					goto loop;
				}
				case  0 : 		//�˳�ϵͳ 
				{	printf("===================================================�˳��ɹ���==================================================\n");
					Sleep(500);	
					exit (0);
				}
				default:		
				{
					printf("��������ȷָ��.\n");
					break;
				}
	
			}
			
			}
		} 
		else
		{
			system("pause");
			
			goto loop ;	
		}
	} 
	else if(a==2)		//ѡ�ֲ˵�
	{
	
	while(1)
	{		Menu_player();
			printf("���������ָ��:\n");
			scanf("%d",&a);
			if(i!=1)				//��ֹ�û��������ĵ��³����� 
			{
			do{
				printf("���������������ȷָ�\n");
				i=scanf("%d",&a);
				fflush(stdin);
			  }while(i!=1);
			}
			while(a<0||a>2)
	{
		printf("���������������ȷָ��(0-2)\n");
		scanf("%d",&a);
		getchar();
	}
	switch(a)
	{
		
	case 1: 
	{	printf("��������������:\n");	//����ѡ�ֲ�ѯ�ɼ� 
		scanf("%s",name);				
		getchar();			
		search(head,name);
		system("pause");
		getchar();
		system("cls");
		break;
	}
	
	case 2:				//����ѡ��˵����� 
	{
		system("pause");
		system("cls");
		goto loop;
	}
	case 0:  //�˳�ϵͳ 
	{
		printf("===================================================�ɹ��˳�ϵͳ==================================================\n");
		Sleep(500);
		return 0 ;
	}
	default:
	{
		printf("��������ȷָ��.\n");
		break;
	}
		
	}
	
	} 
	}

	return 0 ;

}
