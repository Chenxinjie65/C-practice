#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20
typedef int Elemtype;
typedef struct{
	Elemtype a[MAXSIZE];
	int length;
}Sqlist;
Sqlist a,b,c;
/*��������������������������������롢ɾ��������
cha(&a,1,2);out(a);
	 d=delet(&a,2);
	 printf("\n ɾ����Ԫ����%d",d);*/
void creat(Sqlist *m);
void out(Sqlist m);
void cha(Sqlist *m,Elemtype b,int c);
int delet(Sqlist *m,int c);
int look(Sqlist m,Elemtype b);
/*������*/
int main(){
	int d,e;
	 creat(&a); out(a);
	 
	 e=look(a,5);
	 printf("\n 5�ǵ�%d��Ԫ��",e);
}
/*˳���Ĵ���*/
void creat(Sqlist *m){
	int i;
	printf("˳���ĳ���Ϊ��\n");
	scanf("%d",&m->length);
	for(i=0;i<m->length;i++){
		printf("\n�������%d�����ݣ�",i+1);
		scanf("%d",&(m->a[i]));
	}	
}
/*˳�������*/
void out(Sqlist m){
	int i;
	printf("\n");
	for(i=0;i<=m.length-1;i++)
	printf("\n %10d",m.a[i]);
}
/*˳���Ĳ���,�ڵ�c��λ�ò���Ԫ��b*/
void cha(Sqlist *m,Elemtype b,int c){
	int i;
	if(m->length==MAXSIZE) printf("\n overflow!");
	else if(c<1||c>m->length+1) printf("\n Error��");
	else {
	m->length=m->length+1;
	for(i=m->length-2;i>=c-1;i--) m->a[i+1]=m->a[i];
	m->a[c-1]=b;
         }
}
/*˳����ɾ��,ɾ����c��λ�õ�Ԫ�ز�������ֵ*/
int delet(Sqlist *m,int c){
	int x,j;
	if(m->length==0)printf("�ǿձ�");
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
/*˳���Ĳ���*/
int look(Sqlist m,Elemtype b){
	int i,j; j=0;
	for(i=0;i<=m.length-1;i++){
		if(m.a[i]==b) {
		j++;
		return (i+1);
		break;}        /*��break�Ļ�ֻ���ҳ� b ��һ�γ��ֵ�λ�ã�����ж�� b ���Ҳ�Ӧ��Ҫ���һ������*/
	}
	if(j=0) return -1;   /*��֪��Ϊʲô���������� 0 ,������ -1 */
}
