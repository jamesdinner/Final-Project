#include <stdio.h>
#include<stdlib.h>

int check_xx(char panel[][15], int y, int x, char object) {	//檢查x軸
	int stoneCount = 0;
	for (int i = x - 4; i <= x + 4; i++) 
	{
		if (panel[y][i] == object) {
			stoneCount++;
			if (stoneCount == 5) 
				break;
		}
		else 
		{
			stoneCount = 0;
		}
	}
	if (stoneCount >= 5) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int check_Y(char panel[][15], int y, int x, char object) {	//檢查y軸
	int stoneCount = 0;
	for (int i = y - 4; i <= y + 4; i++) 
	{
		if (panel[i][x] == object) 
		{
			stoneCount++;
			if (stoneCount == 5) 
			{
				break;
			}
		}
		else 
		{
			stoneCount = 0;
		}
	}
	if (stoneCount >= 5) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int check_RU(char panel[][15], int y, int x, char object) {	//檢查函數往右上
	int stoneCount = 0;
	for (int i = y - 4, j = x - 4; i <= y + 4; i++, j++) 
	{
		if (panel[i][j] == object) 
		{
			stoneCount++;
			if (stoneCount == 5) 
			{
				break;
			}
		}
		else 
		{
			stoneCount = 0;
		}
	}
	if (stoneCount >= 5) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int check_RD(char panel[][15], int y, int x, int object) {	//檢查函數往右下
	int stoneCount = 0;
	for (int i = y + 4, j = x - 4; i >= y - 4; i--, j++) 
	{
		if (panel[i][j] == object) 
		{
			stoneCount++;
			if (stoneCount == 5) 
			{
				break;
			}
		}
		else {
			stoneCount = 0;
		}
	}
	if (stoneCount >= 5) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main(void)
{
	int s, b, c, d,sum1=0,sum2=0;
	char a[15][15];
	 printf("   1  2  3  4  5  6  7  8  9 10 11 12 13 14 15\n");
	 for (int j = 0; j < 15; j++)
	 {
		 for (int i = 0; i < 15; i++)
		 {
			 a[j][i] = '.';

		 }
	 }
	 for (int j = 0; j < 15; j++)
	 {
		 printf("%2d ", j + 1);
		 for (int i = 0; i < 15; i++)
			 printf("%c  ", a[j][i]);
		 printf("\n");
	 }
	 printf("\n");
	int i, j, step=1,row,column;
	int win=0;
	

	while (1 )
	{
		
		if (step % 2 == 1)
		{
			printf("現在是 [O] 的回合\n");
			printf("請輸入你要選擇的行與列1~15 : ");
			scanf("%d %d", &row, &column);
			printf("\n");
			if (a[row - 1][column - 1] == '.')
			{				
				a[row - 1][column - 1] = 'O';
				step++;
			}
			s = check_xx(a, row - 1, column-1, 'O');
			b = check_Y(a, row - 1, column - 1, 'O');
			c = check_RU(a, row - 1, column - 1, 'O');
			d = check_RD(a, row - 1, column - 1, 'O');
			 sum1 = s + b + c + d;
		}
		else 
		{
			printf("現在是 [X] 的回合\n");
			printf("請輸入你要選擇的行與列1~15 : ");
			scanf("%d %d", &row, &column);
			printf("\n");
			if (a[row - 1][column - 1] == '.')
			{
				a[row - 1][column - 1] = 'X';
				step++;
			}

			s = check_xx(a, row - 1, column - 1, 'X');
			b = check_Y(a, row - 1, column - 1, 'X');
			c = check_RU(a, row - 1, column - 1, 'X');
			d = check_RD(a, row - 1, column - 1, 'X');
			sum2 = s + b + c + d;
		}

		system("cls");
		printf("   1  2  3  4  5  6  7  8  9 10 11 12 13 14 15\n");
		for (i = 0; i < 15; i++)
		{
			printf("%2d ", i + 1);
			for (j = 0; j < 15; j++)
			{
				printf("%c  ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		if (sum1 == 1)
		{
			printf("  [O]方勝利\n");
			break;
		}
		else if (sum2 == 1)
		{
			printf("  [X]方勝利\n");
			break;
		}
	}
	
}


