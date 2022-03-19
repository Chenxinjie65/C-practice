#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Null 0
/*单链表*/
typedef int Elemtype;
typedef struct Node{
       Elemtype data;
	   struct Node *next;}Node;
	   Node *a;
/*函数的声明——单链表的创建、输出、插入、删除、搜索*/
Node *creat();
void out(Node *a);
void cha(Node *a,Elemtype b,int c);  /*将数据 b 插入到第 c 个位置*/
void delet(Node *a,Elemtype b);       /*将数据 b 删去，并返回 b 的位置*/
void search(Node *a,Elemtype b);      /*搜索 b ，输出其位置*/
/*主函数*/     
    
int main(){
	int m,n,i,b,k,r,s;
do {
	printf("\n\n  1.建立链表  ");  
	printf("\n\n  2.插入元素  ");  
	printf("\n\n  3.删除元素  ");  
	printf("\n\n  4.查找元素  "); 
	printf("\n\n  5.结束程序  ");  
	printf("\n\n 请输入选择：");scanf("%d",&k); 
switch(k){
case 1:{
       a=creat();
      printf(" \n 链表a为: \n");
	  out(a);
 }break;
case 2:{
	printf("插入的数据为: \n");
        scanf("%d",&m);
	    printf("插入的位置为： \n");
	    scanf("%d",&n);
	    cha(a,m,n); out(a);   /*把m插入到第n个位置*/
} break;
case 3:{printf("请输入要删除的元素： \n");
	    scanf("%d",&b);
	    delet(a,b);
}break;
case 4:{printf("请输入要查找的元素：\n");
         scanf("%d",&s);
         search(a,s);
}	break;
}
}while(k>=1&&k<5);
} 
/*单链表的创建*/
Node *creat(){
	Elemtype x;Node *h,*s,*p;
	h=(Node *)malloc(sizeof(Node));
	h->data=Null;	h->next=Null;
	p=h;
	printf("请输入数据:(输入-100结束输入) \n");
	scanf("%d",&x);
	while(x != -100){               /*输入-100时代表已经完成所有数据输入*/
	s=(Node *)malloc(sizeof(Node));
	s->data=x;
	s->next=Null; p->next=s;       
	p=s;
	printf("\n 请输入数据:  \n");
	scanf("%d",&x);
	}
	return h;
} 
/*单链表的输出*/
void out(Node *a){
	Node *p;
	if(a->next == Null)
	printf("\n 这是一个空表! \n"); 
	else{  
	 	while(a->next!= Null)
	 	{p=a->next;
		printf("\n%d    ",p->data);
		a=a->next;}	
		printf("\n");} 
}		
 /*单链表的插入*/
void cha(Node *a,Elemtype b,int c){
	Node *new1,*p;int i;
	p=a->next;
	for(i=1;i<c-1;i++) {
	p=p->next;
	if(p==Null){printf("超出链表范围！");
	i=-1;break; }
}
if(i!=-1){
	new1=(Node *)malloc(sizeof(Node));
	new1->data=b;
	new1->next=p->next;
	p->next=new1;}
} 
/*单链表的删除*/ 
void delet(Node *a,Elemtype b){
	int i=1;Node *d=a->next;
	while(d->data!=b) {
    d=d->next; i++;
	if(d==Null){printf("此元素不存在");
	i=-1;break;}}
    free(a);
    if(i!=-1)printf("删除的元素在第  %d  个位置 \n",i);
}
/*单链表的搜索*/
void search(Node *a,Elemtype b){
	int i=1;Node *d=a->next;
	while(d->data!=b) {
    d=d->next; i++;
	if(d==Null) {
	printf("此元素不存在! \n"); 
    i=-1;break;}
	}
	if(i!=-1)  printf("查找的元素在第  %d  个位置\n",i);
}
