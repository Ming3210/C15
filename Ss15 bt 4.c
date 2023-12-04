#include<stdio.h>
struct Book{
	int id;
	char name[50];
	char author[50];
	int cost;
	char catelogy[50];
};
typedef struct Book book;

void enter(book *b)
{
	printf("Id :");
	scanf("%d",&b->id);
	fflush(stdin);
	printf("Ten sach :");
	gets(b->name);
	fflush(stdin);
	printf("Tac gia :");
	gets(b->author);
	printf("Gia tien :");
	scanf("%d",&b->cost);
	fflush(stdin);
	printf("The loai :");
	gets(b->catelogy);
	printf("\n");
}
	
//
void display(book b)
{
	printf("Ma sach : %d\t",b.id);
	printf("Ten sach : %s\t",b.name);
	printf("Tac gia : %s\t",b.author);
	printf("Gia tien : %d\t",b.cost);
	printf("The loai : %s\t",b.catelogy);
	printf("\n\n");
}
void add_book(int *n, int pos) {
  if (pos < 0 || pos > *n) {
    printf("Vi tri khong hop le!\n");
    return;
  }
  for (int i = *n; i > pos; i--) {
    book[i] = book[i - 1];
  }
  printf("Nhap thong tin sach can them:\n");
  printf("Nhap ma sach: ");
  scanf("%d", &book[pos].id);
  printf("Nhap ten sach: ");
  scanf("%s", book[pos].name);
  printf("Nhap tac gia: ");
  scanf("%s", book[pos].author);
  printf("Nhap gia tien: ");
  scanf("%d", &book[pos].cost);
  printf("Nhap so luong: ");
  scanf("%d", &book[pos].catelogy);
  (*n)++;
}


//void addBook(int n,book *b)
//{
//	int position;
//	printf("Ban muon them sach vao vi tri nao:");
//	scanf("%d",&position);
//	while(position>n+1){
//		printf("Vi tri chua hop li\n");
//		printf("Ban muon them sach vao vi tri nao:");
//		scanf("%d",&position);
//	}
//	n++;
//	for(int j=position;j<=n;j--){
////		*(b[j+1]).name=*(b[j]).name;
////		*(b[j+1]).catelogy=*(b[j+1]).catelogy;
//		"b[j+1].cost=b[j].cost";
////		*(b[j+1]).author=*(b[j+1]).author;
//		"b[j+1].id=b[j].id";
//	}
//	printf("Id :");
//	scanf("%d",&b->id);
//	fflush(stdin);
//	printf("Ten sach :");
//	gets(b->name);
//	fflush(stdin);
//	printf("Tac gia :");
//	gets(b->author);
//	printf("Gia tien :");
//	scanf("%d",&b->cost);
//	fflush(stdin);
//	printf("The loai :");
//	gets(b->catelogy);
//	printf("\n");
//}

//void deleteBook(b b[n])
//{
//	int del;
//	printf("Nhap ma sach can xoa :");
//	scanf("%d",&del);
//	for(i=del-1;i<n;i++){
//		b[i] = b[i+1];
////		"&b[i-1].author = &b[i].author";
////		"&b[i-1].catelogy = &b[i].catelogy";
////		b[i-1].cost=b[i].cost;
//	}
//}
int main(){
	int pos,id,n,order,name;
	struct Book booklist[100]= ;
	book b[1000];
//	int n;
	printf("Nhap so sach :");
	scanf("%d",&n);
	
int choice;
	do{
		printf("MENU\n");
		printf("1. Nhap thong tin sach\n");
		printf("2. Hien thi thong tin sach\n");
		printf("3. Them sach vao vi tri\n");
		printf("4. Xoa sach theo ma sach\n");
		printf("5. Cap nhat thong tin theo ma sach\n");
		printf("6. Sap xep sach theo gia tang dan\n");
		printf("7. Tim kiem sach theo ten sach\n");
		printf("8. Tim kiem sach theo khoang gia\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i = 0;i < n; i++){
					printf("Sach %d\n", i+1);
					enter(&b[i]);
				}
				break;
			case 2:
				for(int i = 0;i < n; i++){
					printf("Sach %d\n", i+1);
					display(b[i]);
				}
				break;
			case 3:
				ad_book(&n,&pos);
				break;
//			case 4:
//				deleteBook(b);
//				break;
		}
	}while(1==1);
}

	