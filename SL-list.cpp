#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Null 0
/*������*/
typedef int Elemtype;
typedef struct Node{
       Elemtype data;
	   struct Node *next;}Node;
	   Node *a;
/*��������������������Ĵ�������������롢ɾ��������*/
Node *creat();
void out(Node *a);
void cha(Node *a,Elemtype b,int c);  /*������ b ���뵽�� c ��λ��*/
void delet(Node *a,Elemtype b);       /*������ b ɾȥ�������� b ��λ��*/
void search(Node *a,Elemtype b);      /*���� b �������λ��*/
/*������*/     
    
int main(){
	int m,n,i,b,k,r,s;
do {
	printf("\n\n  1.��������  ");  
	printf("\n\n  2.����Ԫ��  ");  
	printf("\n\n  3.ɾ��Ԫ��  ");  
	printf("\n\n  4.����Ԫ��  "); 
	printf("\n\n  5.��������  ");  
	printf("\n\n ������ѡ��");scanf("%d",&k); 
switch(k){
case 1:{
       a=creat();
      printf(" \n ����aΪ: \n");
	  out(a);
 }break;
case 2:{
	printf("���������Ϊ: \n");
        scanf("%d",&m);
	    printf("�����λ��Ϊ�� \n");
	    scanf("%d",&n);
	    cha(a,m,n); out(a);   /*��m���뵽��n��λ��*/
} break;
case 3:{printf("������Ҫɾ����Ԫ�أ� \n");
	    scanf("%d",&b);
	    delet(a,b);
}break;
case 4:{printf("������Ҫ���ҵ�Ԫ�أ�\n");
         scanf("%d",&s);
         search(a,s);
}	break;
}
}while(k>=1&&k<5);
} 
/*������Ĵ���*/
Node *creat(){
	Elemtype x;Node *h,*s,*p;
	h=(Node *)malloc(sizeof(Node));
	h->data=Null;	h->next=Null;
	p=h;
	printf("����������:(����-100��������) \n");
	scanf("%d",&x);
	while(x != -100){               /*����-100ʱ�����Ѿ����������������*/
	s=(Node *)malloc(sizeof(Node));
	s->data=x;
	s->next=Null; p->next=s;       
	p=s;
	printf("\n ����������:  \n");
	scanf("%d",&x);
	}
	return h;
} 
/*����������*/
void out(Node *a){
	Node *p;
	if(a->next == Null)
	printf("\n ����һ���ձ�! \n"); 
	else{  
	 	while(a->next!= Null)
	 	{p=a->next;
		printf("\n%d    ",p->data);
		a=a->next;}	
		printf("\n");} 
}		
 /*������Ĳ���*/
void cha(Node *a,Elemtype b,int c){
	Node *new1,*p;int i;
	p=a->next;
	for(i=1;i<c-1;i++) {
	p=p->next;
	if(p==Null){printf("��������Χ��");
	i=-1;break; }
}
if(i!=-1){
	new1=(Node *)malloc(sizeof(Node));
	new1->data=b;
	new1->next=p->next;
	p->next=new1;}
} 
/*�������ɾ��*/ 
void delet(Node *a,Elemtype b){
	int i=1;Node *d=a->next;
	while(d->data!=b) {
    d=d->next; i++;
	if(d==Null){printf("��Ԫ�ز�����");
	i=-1;break;}}
    free(a);
    if(i!=-1)printf("ɾ����Ԫ���ڵ�  %d  ��λ�� \n",i);
}
/*�����������*/
void search(Node *a,Elemtype b){
	int i=1;Node *d=a->next;
	while(d->data!=b) {
    d=d->next; i++;
	if(d==Null) {
	printf("��Ԫ�ز�����! \n"); 
    i=-1;break;}
	}
	if(i!=-1)  printf("���ҵ�Ԫ���ڵ�  %d  ��λ��\n",i);
}
