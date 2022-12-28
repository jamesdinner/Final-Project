#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	int a[15][15]={0};
	int i, j, step=0, l,row,column;
	int win=0, lose=0, tie=0;
	

	while (win != 1 || lose != 1 || tie != 1)
	{
		printf("請輸入你要選擇的行與列1~15\n");
		if (step % 2 == 0)
		{
			scanf("%d%d", &row, &column);
			if (a[row - 1][column - 1] != 0)
			{				
				printf("請在下一次\n"); 				
			}
			else
			{
				a[row - 1][column - 1] = 1;
				step++;
				if ()
			}			
		}
		else 
		{
			scanf("%d%d", &row, &column);
			if (a[row - 1][column - 1] != 0)
			{
				printf("請在下一次\n");
			}
			else
			{			
				a[row - 1][column - 1] = 2;
				step++;
			}
		}
		for (i = 0; i < 19; i++)
		{
			for (j = 0; j < 19; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}

}


win1=a[row-5][column-1]== a[row - 4][column-1] == a[row - 3][column-1] == a[row - 2][column-1] == a[row - 1][column-1]
win2=a[row - 4][column-1] == a[row - 3][column-1] == a[row - 2][column-1] == a[row - 1][column-1] == a[row][column-1]
win3=[row - 3][column-1] == a[row - 2][column-1] == a[row - 1][column-1] == a[row][column-1] == a[row+1][column-1]
win4=a[row - 2][column-1] == a[row - 1][column-1] == a[row][column-1] == a[row + 1][column-1] == a[row + 2][column-1]
win5=a[row - 1][column-1] == a[row][column-1] == a[row + 1][column-1] == a[row + 2][column-1] == a[row + 3][column-1]
