#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("***1.play 0.exit*****\n");
	printf("*********************\n");
}
void game()
{
		//����ɨ����Ϸ
	//mine���úõ���
	
	char mine[ROWS][COLS] = {0};
	//show �Ų���׵���Ϣ
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	//���úõ��׵���Ϣ��Ӧ�����״�ӡ
	//DisplayBoard(mine, ROW, COL);
	//1.������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//2.ɨ��
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//���������������
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}