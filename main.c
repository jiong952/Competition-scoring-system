#include "include.h"

int i,j,t,num=0;		//i,j用于循环，num为计数器 ,t是标志变量
char name[100];
time_t now;//系统时间
struct AthleteScore *head;	//头指针 

int main()
{	
	int i,j,num;		//i,j用于循环，num为计数器 ,t是标志变量 
	char name[100];
	system("color 3e");  	//背景淡蓝色 
	int c,a;		//c,a用于switch 
	char judgement[10][10] = {"评委1","评委2","评委3","评委4","评委5","评委6","评委7","评委8","评委9","评委10"};		//定义评委数组名字 
	Welcome();			//欢迎界面 
	system("pause");
	system("cls");
	loop:Choose();				//身份选择界面
	printf("请输入你的指令:");
	scanf("%d",&a);		
	while(a<1||a>3)			//用户错误输入后进行报错提示 
	{
		printf("输入错误！请输入正确指令(1-3)\n");
		scanf("%d",&a);
		getchar();
	}
	system("cls");
	if(a==1)	//管理员选项 
	{
		j=Login();    //把Login返回值赋值给j	
		if(j==1)	//成功登录管理员 
		{ 	while(1)
			{ 
			Menu_manager();		//管理员菜单 
			printf("请输入你的指令:\n");
			i=scanf("%d",&a);
			if(i!=1)				//防止用户输入中文导致程序奔溃 
			{
			do{
				printf("输入错误，请输入正确指令(0-9)！\n");
				i=scanf("%d",&a);
				fflush(stdin);
			  }while(i!=1);
			}
			while(a< 0||a>9)			//用户错误输入后进行报错提示 
			{
				printf("输入错误！请输入正确指令(0-9)\n");
				scanf("%d",&a);
				getchar();
			}
			switch(a)
			{
				case 1:			//管理员输入评分结果 
				{	getchar();
					printf("********输入选手成绩*********：\n");
					input();		//创建链表同时按序号输入选手成绩 
					system("pause");
					getchar();
					system("cls");
					break;	
				}	
				case  2 :			//删除退赛选手  允许多次删除
				{	getchar();
					char del_name[100];			//del_name为删除选手名字
					printf("********删除退赛选手*********：\n");
					printf("请输入退赛选手的名字（输入0返回）:\n");
					scanf("%s",del_name);
					getchar();
					while(strcmp(del_name,"0")!=0)
					{	
						del(head,del_name);
						system("pause");
						getchar();
						printf("请输入退赛选手的名字（不继续删除请输入 0 ）:\n");
						scanf("%s",&del_name);
					}
					system("cls");
					break;
				}	
				case 3:		//增加新增选手 		允许多次增加 
				{
					getchar();
					printf("********输入选手成绩*********：\n");
					input();
					system("pause");
					getchar();
					system("cls");
					break;
				}
				
				
				case  4 : 		//保存原始数据
				{	getchar();
					saveFile_Original(head);
					system("pause");
					getchar();
					system("cls");
					break;
			 	} 
				
				case  5 :		// 显示所有运动员原始成绩 
				{	getchar();
					show_Original(head);	
					system("pause");
					getchar();
					system("cls");
					break;
				} 
				
			 	case  6 : 		//按平均成绩排名并保存进Grade文件 
				{	getchar();
					rank(head);		//排序 
					saveFile_Grade(head);		//保存选手最终成绩 
					system("pause");
					getchar();
					system("cls");
					break;
				}
				case  7 ://显示最终成绩 
				{
					getchar();
					show_Grade(head);
					system("pause");
					getchar();
					system("cls");
					break;	
				}
				case  8 : 		//根据选手姓名查成绩
				{	getchar();
					printf("请输入查询选手的姓名:\n");
					scanf("%s",name);	
					getchar();			
					search(head,name);
					system("pause");
					getchar();
					system("cls");
					break;
				}
				case  9:	//跳转回选择身份菜单 
				{
					system("pause");
					system("cls");
					goto loop;
				}
				case  0 : 		//退出系统 
				{	printf("===================================================退出成功！==================================================\n");
					Sleep(500);	
					exit (0);
				}
				default:		
				{
					printf("请输入正确指令.\n");
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
	else if(a==2)		//选手菜单
	{
	
	while(1)
	{		Menu_player();
			printf("请输入你的指令:\n");
			scanf("%d",&a);
			if(i!=1)				//防止用户输入中文导致程序奔溃 
			{
			do{
				printf("输入错误，请输入正确指令！\n");
				i=scanf("%d",&a);
				fflush(stdin);
			  }while(i!=1);
			}
			while(a<0||a>2)
	{
		printf("输入错误！请输入正确指令(0-2)\n");
		scanf("%d",&a);
		getchar();
	}
	switch(a)
	{
		
	case 1: 
	{	printf("请输入您的姓名:\n");	//参赛选手查询成绩 
		scanf("%s",name);				
		getchar();			
		search(head,name);
		system("pause");
		getchar();
		system("cls");
		break;
	}
	
	case 2:				//返回选择菜单界面 
	{
		system("pause");
		system("cls");
		goto loop;
	}
	case 0:  //退出系统 
	{
		printf("===================================================成功退出系统==================================================\n");
		Sleep(500);
		return 0 ;
	}
	default:
	{
		printf("请输入正确指令.\n");
		break;
	}
		
	}
	
	} 
	}

	return 0 ;

}
