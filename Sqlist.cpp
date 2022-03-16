#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
typedef int Elemtype;
typedef struct{
	Elemtype a[MAXSIZE];
	int length;
}Sqlist;
Sqlist a,b,c;
/*函数的声明————创建、输出、插入、删除、查找*/
void creat(Sqlist *m);
void out(Sqlist m);
void cha(Sqlist *m,Elemtype b,int c);
int delet(Sqlist *m,int c);
int look(Sqlist m,Elemtype b);
/*主函数*/
int main(){
	int d,e;
	 creat(&a); out(a);
	 cha(&a,1,2);out(a);
	 d=delet(&a,2);
	 printf("\n 删除的元素是%d",d);
	 e=look(a,5);
	 printf("\n 5是第%d个元素",e);
}
/*顺序表的创建*/
void creat(Sqlist *m){
	int i;
	printf("顺序表的长度为：\n");
	scanf("%d",&m->length);
	for(i=0;i<m->length;i++){
		printf("\n请输入第%d个数据：",i+1);
		scanf("%d",&(m->a[i]));
	}	
}
/*顺序表的输出*/
void out(Sqlist m){
	int i;
	printf("\n");
	for(i=0;i<=m.length-1;i++)
	printf("\n %10d",m.a[i]);
}
/*顺序表的插入,在第c个位置插入元素b*/
void cha(Sqlist *m,Elemtype b,int c){
	int i;
	if(m->length==MAXSIZE) printf("\n overflow!");
	else if(c<1||c>m->length+1) printf("\n Error！");
	else {
	m->length=m->length+1;
	for(i=m->length-2;i>=c-1;i--) m->a[i+1]=m->a[i];
	m->a[c-1]=b;
         }
}
/*顺序表的删除,删除第c个位置的元素并返回其值*/
int delet(Sqlist *m,int c){
	int x,j;
	if(m->length==0)printf("是空表");
	else if(c<1||c>m->length) {
	printf("Error"); 
    x=-1;}
    else {
    	x=m->a[c-1];
    	for(j=1;j<=m->length-1;j++) m->a[j-1]=m->a[j];
    	m->length++;
	}
	return x;	
}
/*顺序表的查找*/
int look(Sqlist m,Elemtype b){
	int i,j; j=0;
	for(i=0;i<=m.length-1;i++){
		if(m.a[i]==b) {
		j++;
		return (i+1);
		break;}        /*用break的话只能找出 b 第一次出现的位置，如果有多个 b ，我猜应该要输出一个数组*/
	}
	if(j=0) return -1;   /*不知道为什么最后输出的是 0 ,而不是 -1 */
}
