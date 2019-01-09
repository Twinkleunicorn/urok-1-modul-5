#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

void task1()
{
	int A[10] = {};
	for (size_t i = 0; i < 10; i++)
	{
		printf("«начени€: ");
		scanf_s("%d", &A[i]);
	}
}
void task2()
{
	int	A[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 163 + rand() % 27;
		printf("–ост %d студента = %d\n ", i, A[i]);
	}
}
void task3()
{
	int A[10] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 17 + rand() % 34;
		printf("¬ведите индекс массива:");
		scanf_s("%d", &i);
		printf("Ёлемент по индексу %d =%d\n", i, A[i]);
	}

}
void task4()
{
	int A[10] = { 0 };

	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 34;
		printf("a[%d]= %d\n", i, A[i]);
	}

	printf("\n\nќбратный пор€док\n");

	for (size_t i = 9; i < -1; i--)
	{
		printf("a[%d]= %d\n", i, A[i]);

	}
}
void task5()
{
	int A[10] = { 1 };
	float N;
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 17 + rand() % 34;
		printf("¬ведите индекс массива:");
		scanf_s("%d", &i);
		printf("Ёлемент по индексу %d =%d\n", i, A[i]);
		N = (float)(sqrt(A[i]));
		printf(" вадратный корень: %f\n", N);
	}
}
void task6()
{
	int A[10] = { 0 };
	int  M = 10;
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 17 + rand() % 34;
		printf("Ёлемент массива: %d\n", A[i]);
		printf("Ёлементы массива после уменьшени€ на M :%d\n", A[i] - M);
		printf("Ёлементы массива после увеличени€ :%d\n", A[i] * 2);
	}
}
void task7()
{
	int A[12] = { 0 };
	int S;
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 1 + rand() % 130;
		S = A[1] + A[i++];
		printf("—умма: %d\n", S);
	}
}
void task8()
{
	int A[28] = { 0 };
	int Sr;
	for (size_t i = 0; i < 28; i++)
	{
		A[i] = 1 + rand() % 130;
		Sr = (A[1] + A[i++]) / 28;
		printf("—реднее: %d\n", Sr);
	}
}
void task9()
{
	int A[30] = { 1 };
	int sum=0;
	for (size_t i = 0; i < 30; i++)
	{
		A[i] = 2 + rand() % 13;
		
		printf("√руз предмета: %d\n", A[i]);
	}
	for (size_t i = 0; i < 30; i++)
	{
		sum += A[i];
	}
	if (sum <= 100)
	{
		printf("ƒопустимый груз\n");
	}
	else
	{
		printf("Ќедопустимый груз\n");
	}
}
void task10()
{
	int A[12] = { 0 };
	for (size_t i = 0; i < 12; i + 2)
	{
		A[i] = 1 + rand() % 100;
		printf("%d\n", A[i]);
	}
}

void task11()
{
       int A[28] = { 0 };
		for (size_t i = 12; i < -1; i--)
		{
		A[i] = -100 + rand() % 200;
		printf("%d = %d\n", i, A[i]); 
		}
		if (A[i] < 100)
		{
		printf("%d\n", &A[i]);
		}

		
}

void task12()		
{
	int A[28] = { 0 };
	int i;
	for (size_t i = 12; i < -1; i--)
	{
			A[i] = -100 + rand() % 200;
			printf("%d = %d\n", i, A[i]);
	}
	if (A[i]>0)
		
	{
	
		printf("»того:%d\n", &A[i]);
	}

}
int main()

{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("¬ведите номер задачи: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
			task1();
			break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		case 7:
		{
			task7();
		}
		break;
		case 8:
		{
			task8();
		}
		break;
		case 9:
		{
			task9();
		}
		break;
		case 10:
		{
			task10();
		}
		break;
		case 11:
		{
			task11();
		}
		break;
		case 12:
		{
			task12();
		}
		break;
		default:
			break;
		}

		printf("’отите продолжить?1/0\n");
		scanf_s("%d", &flag);

	} while (flag == 1);
}