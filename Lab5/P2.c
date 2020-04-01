#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define CAPACITATE 25

int stack[CAPACITATE], top = -1;

void push(int numar)
{
	if (top == CAPACITATE - 1)
	{
		printf("Stiva este plina!\n");
	}
	else
	{
		stack[top++] = numar;
	}
}

int trans_bin(int C, int N)
{
	int nr,i;
	for (i = 0; i < N; i++)
	{
		printf("numar= ");
		scanf("%d", &nr);
		if ((nr >> C) & 1 == 1)
			push(nr);
	}
}

void afisare_stiva()
{
	int i = top;
	while (i != -1)
	{
		printf("%d\n", stack[i]);
		i--;
	}
}
int main()
{
	int C, N;
	printf("C = ");
	scanf("%d", &C);
	printf("N = ");
	scanf("%d", &N);
	trans_bin(C, N);
	printf("\n\n");
	afisare_stiva();
	system("PAUSE");
	return 0;
}
