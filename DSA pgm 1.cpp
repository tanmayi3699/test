/*ARRAY 1*/
#include<stdio.h>
#include<stdlib.h>
int a[20];
int n=0;
void create()
{
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the element for the array:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
}

void display()
{
	printf("The array elements are:\n");
	for(int i=0; i<n; i++)
	{
		printf("%d\n", a[i]);
	}
}

void insert()
{
	int pos, value;
	printf("Enter the index position for the new element:");
	scanf("%d",&pos);
	printf("Enter the element to be inserted:");
	scanf("%d",&value);
	for(int i=n-1; i>=pos; i++)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	n=n+1;
}

void delete()
{
	int pos, value;
	printf("Enter the index position of the element to be deleted:");
	scanf("%d", &pos);
	value=a[pos];
	for(int i=pos+1; i<n; i++)
	{
		a[i-1]=a[i];
	}
	n=n-1;
	printf("The deleted element is = %d", value);
}

int main()
{
	int choice;
	typedef struct
	{
		char *name;
		void (*func)();
	}Menu;
	
	Menu menu[]=
	{
		{"Done", exit},
		{"Create", create},
		{"Insert", insert},
		{"Delete", delete},
		{"Display", display},
	};
	
	for(;;)
	{
		printf{"\n----Array Menu----"};
		for(int i=0; i<5; i++)
		{
			printf("%d.%s\n", i, menu[i].name);
		}
		printf("-----------\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		menu[choice].func();
	}
}

