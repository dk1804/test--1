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
		//真正扫雷游戏
	//mine布置好的雷
	
	char mine[ROWS][COLS] = {0};
	//show 排查出雷的信息
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	//布置好的雷的信息不应该轻易打印
	//DisplayBoard(mine, ROW, COL);
	//1.布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//2.扫雷
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//设置随机数的生成
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}