#include<stdio.h>
int main()
{
	struct Student{
		char name[50];
		int age;
		char phone[50];
		char email[50];
	};
//	struct Student sv1;
	struct Student sv1 = {"Pham Van Minh",18,"0355129455","vminh0227@gmail.com"	};
	struct Student sv2 = {"Nguyen Van A",18,"0999222888","Abcxyz123@gmail.com"	};
	printf("Name: %s\n",sv1.name);
	printf("Age: %d\n",sv1.age);
	printf("Phone: %s\n",sv1.phone);
	printf("email: %s\n\n",sv1.email);
	printf("Name: %s\n",sv2.name);
	printf("Age: %d\n",sv2.age);
	printf("Phone: %s\n",sv2.phone);
	printf("email: %s",sv2.email);
}