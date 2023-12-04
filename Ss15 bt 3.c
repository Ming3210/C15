#include<stdio.h>
int n;
int i=0,fix=0;
struct Student
{
	char name[50];
	int age;
	char phone[50];
	char email[50];;
};
typedef struct Student sts;

void enter(sts s[n])
{

	printf("Nhap thong tin hoc sinh\n");
	printf("Sinh vien %d\n",i+1);
	printf("Ten :");
	scanf("%s",&s[i].name);
	printf("Tuoi :");
	scanf("%d",&s[i].age);
	printf("Sdt : ");
	scanf("%s",&s[i].phone);
	printf("email :");
	scanf("%s",&s[i].email);
}

void display(sts s[n])
{
	printf("Sinh vien %d\n",i+1);
	printf("Ten sv %d : %s\n",i+1,s[i].name);
	printf("Tuoi sv %d : %d\n",i+1,s[i].age);
	printf("Sdt sv %d : %s\n",i+1,s[i].phone);
	printf("Email sv %d : %s\n",i+1,s[i].email);
	printf("\n");
}

void addStudent(sts s[n])
{
		n++;
		i++;
		printf("Sinh vien %d\n",i);
		printf("Ten :");
		scanf("%s",&s[n-1].name);
		printf("Tuoi :");
		scanf("%d",&s[n-1].age);
		printf("Sdt : ");
		scanf("%s",&s[n-1].phone);
		printf("email :");
		scanf("%s",&s[n-1].email);
		printf("\n");
}

void fixStudent(sts s[n])
{
	printf("So thu tu sinh vien can sua : ");
	scanf("%d",&fix);
	printf("Ten sinh vien thu %d : ",fix);
	scanf("%s",&s[fix-1].name); 
	printf("Tuoi sinh vien thu %d : ",fix);
	scanf("%s",&s[fix-1].age);
	printf("Sdt sinh vien thu %d : ",fix);
	scanf("%s",&s[fix-1].phone);
	printf("Email sinh vien thu %d : ",fix);
	scanf("%s",&s[fix-1].email);
}
void deleteStudent(sts s[n])
{
	int del;
	printf("Nhap so thu tu hoc sinh can xoa :");
	scanf("%d",&del);
	for(i=del+1;i<n;i++){
		"&s[i-1].name = &s[i].name";	
		"&s[i-1].phone = &s[i].phone";
		"&s[i-1].email = &s[i].email";
		s[i-1].age=s[i].age;
	}
}
int main()
{
	int choice;
	printf("Nhap so sinh vien muon nhap:");
	scanf("%d",&n);
	sts s[n];
	for(i=0;i<n;i++){
		enter(s);
	}
	
	do{
		printf("\nMENU\n");
		printf("5. In\n");
		printf("6. Them\n");
		printf("7. Sua\n");
		printf("8. Xoa\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 5:
				for(i=0;i<n;i++){
					display(s);
				}
				break;
			case 6:
				addStudent(s);
				break;
			case 7 :
				fixStudent(s);
				break;
			case 8:
				deleteStudent(s);
				break;
		}
		
	}while (1==1);
	
}