#include "include.h"

//����Ա�˵� 
void Menu_manager()
	{	now = time (NULL);	
		system("cls");
		printf("\n                               -----------------------   ����Աϵͳ  ----------------------                            \n");

		printf("                                                  | 1 : ����ѡ�ֳɼ�.       |\n");
	
		printf("                                                  | 2 : ɾ������ѡ��.       |\n");

		printf("                                                  | 3 : ������ѡ��.         |\n");
		
		printf("                                               	  | 4 : ����ԭʼ����.       |\n");
				
		printf("                                                  | 5 : ��ʾ����ѡ�ֳɼ�.   |\n");
		
		printf("                                                  | 6 : �ɼ�����������.     |\n");
		
		printf("                                                  | 7 : ��ʾѡ�����ճɼ�.   |\n");
		
		printf("                                                  | 8 : ����ѡ��������ɼ�. |\n");
		
		printf("                                                  | 9 : �������˵�.         |\n");
		
		printf("                                                  | 0 : �˳�ϵͳ.           |\n");
		
		printf("                                  -------------------------------------------------------------\n");
		printf("		                      ��ǰʱ��:%s  ",ctime(&now) );
		printf("\n");
		printf("                                       **************��ע�Ᵽ�����ݣ�************\n" );
		
		
	}
	
	//ѡ�ֲ˵� 
void Menu_player()
{	now = time (NULL);	
	system("cls");
	
	printf("\n                                   -----------------------  ѡ�ֲ��ϵͳ ---------------------- \n");                                                
	
	printf("                                                         | 1 : ���ҳɼ�. |\n");
	
	printf("                                                         | 2 : �������˵�. |\n");
	
	printf("                                                         | 0 : �˳�ϵͳ. |\n");
	
	printf("                                     -------------------------------------------------------------\n");
	printf("		                      ��ǰʱ��:%s  ",ctime(&now) );
} 

//��ӭ���� 		
void Welcome()
{
	now = time (NULL);	
	printf("\n\n\n\n\n");
	printf("		\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                 ._______________________.                    �U\n");
	printf("		\t�U                 | _____________________ |                    �U\n");
	printf("		\t�U                 | I                   I |                    �U\n");
	printf("		\t�U                 | I    ��������ϵͳ   I |                    �U\n");
	printf("		\t�U                 | I                   I |                    �U\n");
	printf("		\t�U                 | I___________________I |                    �U\n");
	printf("		\t�U                 !_______________________!                    �U\n");
	printf("		\t�U                     ._[__________]_.                         �U\n");
	printf("		\t�U                 .___|_______________|___.                    �U\n");
	printf("		\t�U                  |:::  ____            |                     �U\n");
	printf("		\t�U                  |                     |                     �U\n");
	printf("		\t�U                  !_____________________!                     �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U  �����ߣ������ѧԺ         �������9��            �ſ���    �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("		                      ��ǰʱ��:%s  ",ctime(&now) );
}
//���ѡ����� 
void Choose()
{	now = time (NULL);
	printf("\n\n\n");
	printf("		\t�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U    	  ~~~~~~~~~~~~~~��ѡ��������~~~~~~~~~~~~             �U\n");                                             
	printf("		\t�U                                                              �U\n");
    printf("		\t�U                        1.����Ա                              �U\n");                    
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                        2.�˶�Ա                              �U\n");        
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                        3.�˳�ϵͳ                            �U\n");          
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�U    	  ~~~~~~~~~~~~~~����ѡ��<1-3>~~~~~~~~~~~~              �U\n");     
	printf("		\t�U                                                              �U\n");
	printf("		\t�U                                                              �U\n");
	printf("		\t�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("		                      ��ǰʱ��:%s  ",ctime(&now) );	
}
//����Ա��¼��֤���� 
int Login()
{
		char pass[50];	
		char password[50]="123456";          					//���ù���Ա���� 
		printf("\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t���������Ա����:\n");
		printf("\n\n\n\n\n\n\n");
		printf("                                                ���ڴ˴�����:");
		scanf("%s",pass);
		if(!strcmp(pass,password))		//��֤���� 
		{
		printf("\n\n\n\n\n\n\n");
		printf("===================================================��¼�ɹ���==================================================\n");
		Sleep(1500);						//��½��ʱ���򣬲������ݵĵ�½״̬	
		return 1;
		}	
		else {
		printf("\n\n\n\n\n\n\n");
		printf("============================================���������û�й���ԱȨ�ޣ�========================================\n");
		Sleep(2000);						//��½��ʱ���򣬲������ݵĵ�½״̬	
		system("cls");
		return -1;
	}
	return 0;
}
