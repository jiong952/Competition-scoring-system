#include "include.h"

//管理员菜单 
void Menu_manager()
	{	now = time (NULL);	
		system("cls");
		printf("\n                               -----------------------   管理员系统  ----------------------                            \n");

		printf("                                                  | 1 : 输入选手成绩.       |\n");
	
		printf("                                                  | 2 : 删除退赛选手.       |\n");

		printf("                                                  | 3 : 增加新选手.         |\n");
		
		printf("                                               	  | 4 : 保存原始数据.       |\n");
				
		printf("                                                  | 5 : 显示所有选手成绩.   |\n");
		
		printf("                                                  | 6 : 成绩排名并保存.     |\n");
		
		printf("                                                  | 7 : 显示选手最终成绩.   |\n");
		
		printf("                                                  | 8 : 根据选手姓名查成绩. |\n");
		
		printf("                                                  | 9 : 返回主菜单.         |\n");
		
		printf("                                                  | 0 : 退出系统.           |\n");
		
		printf("                                  -------------------------------------------------------------\n");
		printf("		                      当前时间:%s  ",ctime(&now) );
		printf("\n");
		printf("                                       **************请注意保存数据！************\n" );
		
		
	}
	
	//选手菜单 
void Menu_player()
{	now = time (NULL);	
	system("cls");
	
	printf("\n                                   -----------------------  选手查分系统 ---------------------- \n");                                                
	
	printf("                                                         | 1 : 查找成绩. |\n");
	
	printf("                                                         | 2 : 返回主菜单. |\n");
	
	printf("                                                         | 0 : 退出系统. |\n");
	
	printf("                                     -------------------------------------------------------------\n");
	printf("		                      当前时间:%s  ",ctime(&now) );
} 

//欢迎界面 		
void Welcome()
{
	now = time (NULL);	
	printf("\n\n\n\n\n");
	printf("		\t╔══════════════════════════════════════════════════════════════╗\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                 ._______________________.                    ║\n");
	printf("		\t║                 | _____________________ |                    ║\n");
	printf("		\t║                 | I                   I |                    ║\n");
	printf("		\t║                 | I    比赛评分系统   I |                    ║\n");
	printf("		\t║                 | I                   I |                    ║\n");
	printf("		\t║                 | I___________________I |                    ║\n");
	printf("		\t║                 !_______________________!                    ║\n");
	printf("		\t║                     ._[__________]_.                         ║\n");
	printf("		\t║                 .___|_______________|___.                    ║\n");
	printf("		\t║                  |:::  ____            |                     ║\n");
	printf("		\t║                  |                     |                     ║\n");
	printf("		\t║                  !_____________________!                     ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║  制作者：计算机学院         计算机类9班            张俊鸿    ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t╚══════════════════════════════════════════════════════════════╝\n");
	printf("		                      当前时间:%s  ",ctime(&now) );
}
//身份选择界面 
void Choose()
{	now = time (NULL);
	printf("\n\n\n");
	printf("		\t╔══════════════════════════════════════════════════════════════╗\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║    	  ~~~~~~~~~~~~~~请选择你的身份~~~~~~~~~~~~             ║\n");                                             
	printf("		\t║                                                              ║\n");
    printf("		\t║                        1.管理员                              ║\n");                    
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                        2.运动员                              ║\n");        
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                        3.退出系统                            ║\n");          
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t║    	  ~~~~~~~~~~~~~~请你选择<1-3>~~~~~~~~~~~~              ║\n");     
	printf("		\t║                                                              ║\n");
	printf("		\t║                                                              ║\n");
	printf("		\t╚══════════════════════════════════════════════════════════════╝\n");
	printf("		                      当前时间:%s  ",ctime(&now) );	
}
//管理员登录验证界面 
int Login()
{
		char pass[50];	
		char password[50]="123456";          					//设置管理员密码 
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t请输入管理员密码:\n");
		printf("\n\n\n\n\n\n\n");
		printf("                                                请在此处输入:");
		scanf("%s",pass);
		if(!strcmp(pass,password))		//验证密码 
		{
		printf("\n\n\n\n\n\n\n");
		printf("===================================================登录成功！==================================================\n");
		Sleep(1500);						//登陆延时程序，产生短暂的登陆状态	
		return 1;
		}	
		else {
		printf("\n\n\n\n\n\n\n");
		printf("============================================密码错误！你没有管理员权限！========================================\n");
		Sleep(2000);						//登陆延时程序，产生短暂的登陆状态	
		system("cls");
		return -1;
	}
	return 0;
}
