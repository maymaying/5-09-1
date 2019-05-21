#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>


/*
//int
int cmpInt(const void * xp, const void * yp)
{
	int *x = (int*)xp; 
	int *y = (int*)yp;
	if (*x > *y)
	{
		return 1;
	}
	else if (*x < *y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void show(int a[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int num = sizeof(arr) / sizeof(arr[0]);
	show(arr, num);
	qsort(arr, num, sizeof(int), cmpInt);
	show(arr, num);
	system("pause");
	return 0;
}
*/


/*
//double
int cmpDouble(const void * xp, const void * yp)
{
	double *x = (double*)xp;
	double *y = (double*)yp;
	if (*x > *y)
	{
		return 1;
	}
	else if (*x < *y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void show(double a[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf("%f ", a[i]);
	}
	printf("\n");
}
int main()
{
	double arr[] = { 1.1, 3.5, 5.8, 7.4, 9.3, 2.5, 4.6, 6.6, 8.4, 0.9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	show(arr, num);
	qsort(arr, num, sizeof(double), cmpDouble);
	show(arr, num);
	system("pause");
	return 0;
}
*/


/*
//模拟实现qsort
int cmpDouble(const void * xp, const void * yp)
{
	double *x = (double*)xp;
	double *y = (double*)yp;
	if (*x > *y)
	{
		return 1;
	}
	else if (*x < *y)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void show(double a[], int num)
{
	int i = 0;
	for (; i < num; i++)
	{
		printf("%f ", a[i]);
	}
	printf("\n");
}
void swap(char *x, char *y, int size)
{
	int i = 0;
	for (; i < size; i++)
	{
		char tmp = *x;
		*x = *y;
		*y = tmp;
		x++;
		y++;
	}
}
void MyQsort(void *base, int num, int size, \
	int(*cmp)(const void*, const void*))
{
	assert(base);
	assert(cmp);
	char *start = (char*)base;
	int i = 0;
	for (; i < num - 1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp(start + size*j, start + size*(j + 1))>0)
			{
				flag = 1;
				swap(start + size*j, start + size*(j + 1),size);
			}
		}
		if (!flag)
		{
			break;
		}
	}
}
int main()
{
	double arr[] = { 1.1, 3.5, 5.8, 7.4, 9.3, 2.5, 4.6, 6.6, 8.4, 0.9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	show(arr, num);
	MyQsort(arr, num, sizeof(double), cmpDouble);
	show(arr, num);
	system("pause");
	return 0;
}
*/


/*
//模拟实现qsort
int int_cmp(const void * p1, const void * p2)
{
	return (*(int *)p1 > *(int *)p2);
}
void _swap(void *p1, void * p2, int size)
{
	int i = 0;
	for (i = 0; i< size; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
{
	int i = 0;
	int j = 0;
	for (i = 0; i< count - 1; i++)
	{
		for (j = 0; j<count - i - 1; j++)
		{
			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
			{
				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
*/