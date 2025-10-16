#include<stdio.h>
struct student
{
	int rollno;
	char *name;
	float marks;
};
int main()
{
int i;
struct student s[5];
printf("Enter the record of 5 student:");
for(i=0;i<5;i++)
{
	printf("\nEnter the rollno:");
	scanf("%d",&s[i].rollno);
	printf("\nEnter the name:");
	scanf("%s",s[i].name);
	printf("\nEnter the marks:");
	scanf("%f",&s[i].marks);
}
printf("Enter details of 5 studentsare:\n");
for(i=0;i<5;i++)
{
	printf("%d %s %f",s[i].rollno,s[i].name,s[i].marks);
}
  return 0;	

}
