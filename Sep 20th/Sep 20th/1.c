#define _CRT_SECURE_NO_WARNINGS 1
/*#include <stdio.h>
int main()
{

printf("Practice makes perfect!\n");
  return 0;
}*/
#include <stdio.h>
/*void printf_t(char Arr[][5], int row, int col)
{   
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%c", Arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	char arr[3][5] = { {'v',' ',' ',' ','v'},{' ','v',' ','v',' '}, {' ',' ','v',' ',' '}};
	printf_t(arr,3,5);
	return 0;
}*/
#include <stdio.h>
/*int main()
{
	printf("This size of short is %d\n",sizeof(int));
	printf("This size of short is %d\n",sizeof(char));
	printf("This size of short is %d\n", sizeof(long));
	printf("This size of short is %d\n",sizeof(double));
	printf("This size of short is %d\n",sizeof(float));
	return 0;
}*/
#include <stdio.h>
void printf_t(char Arr[][12], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{   
		j = 0;
		if (i == 4 || i == 6)
		{
			
			for (j = 0; j < col; j++)
			{
				printf("*", Arr[i][j]);
			}
		}
			for (j = 0; j < col; j++)
			{
				if ((j == 5 || j == 6) && (i == 0 || i == 2))
				{
					printf("*", Arr[i][j]);
				}
				
				 else if ((j == 4 || j == 7) && (i == 8 || i == 10))
				      {
					    printf("*", Arr[i][j]);
				       }
				else
				{
					printf("%c", Arr[i][j]);
				}
				
			}
			printf("\n");
	}


}
int main()
{   
	char arr[11][12] = { 0 };
	memset(arr, ' ', sizeof(arr));
	printf_t(arr, 11, 12);//´òÓ¡arr
	
	return 0;
}