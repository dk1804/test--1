#define _CRT_SECURE_NO_WARNINGS 

#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------------------\n");
	//列号的打印
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//布置雷，随机找坐标
	int count = EASY_COUNT;
	while (count)
	{

		int x = rand() % row + 1;
		int y = rand() % row + 1;
	//2.布置雷
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS],
	char show[ROWS][COLS],
	int row,
	int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//判断x,y坐标处是否是雷
			if (mine[x][y] == '1')
			{
				printf("被炸死了\n");
			    DisplayBoard(mine,row ,col );
				break;
			}
			else
			{
				//如果x,y坐标不是雷，就统计周围有几个雷
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	} 
	if (win == ROW*COL - EASY_COUNT)
	{
		printf("恭喜你，成功");
	}
}
