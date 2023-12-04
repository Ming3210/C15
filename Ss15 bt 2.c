#include<stdio.h>
struct Student
{
	char name[50];
	int age;
	char phone[50];
	char email[50];	
};
void display(struct Student s);
int main()
{
	struct Student s1,s2;
	printf("Enter name1:");
	scanf("%s",s1.name);
	printf("Enter age1:");
	scanf("%d", &s1.age);
	printf("Enter phone1:");
	scanf("%s",s1.phone);
	printf("Enter email1:");
	scanf("%s",s1.email);
	printf("\n");
	printf("Enter name2:");
	scanf("%s",s2.name);
	printf("Enter age2:");
	scanf("%d", &s2.age);
	printf("Enter phone2:");
	scanf("%s",s2.phone);
	printf("Enter email2:");
	scanf("%s", s2.email);
	display(s1);
	display(s2);
	return 0;
}
	void display(struct Student s)
{
	printf("\nDisplaying information\n");
	printf("Name: %s",s.name);
	printf("\nAge: %d",s.age);
	printf("\nPhone :%s",s.phone);
	printf("\nEmail: %s",s.email);
};
