#include<stdio.h>
#include<string.h>
struct employe
{
	int id;
	char name[50];
	float salary;
	
};
int main()
{
	struct employe e1={234554,"annaya",5689.98};
	printf("id of the employe:%d",e1.id);
	printf("\nname of the employe:%s",e1.name);
	printf("\nsalary of the employe:%f",e1.salary);
	return 0;		
}
