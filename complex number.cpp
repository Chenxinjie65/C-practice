#include <stdio.h>
typedef struct
{ float x;   /*ʵ��*/ 
  float y;   /*�鲿*/
} comp;

/*����������*/
void creat(comp *a);
void output(comp b);
comp add(comp c,comp d);
comp sub(comp m,comp n);
comp chengji(comp m,comp n);
comp a,b,c,d,e;
/*������*/
int main(){
	creat(&a);   
	printf("a��ֵΪ:\n") ; 
	output(a);
	creat(&b);   
	printf("b��ֵΪ:\n") ; 
	output(b);
	c=add(a,b);
	printf("��Ϊ:\n") ;
	output(c);
	printf("a,b֮��Ϊ:\n") ;
	d=sub(a,b);
	output(d);
	printf("a,b֮��Ϊ:\n") ;
	e=chengji(a,b);
	output(e); 
}
/*����һ������*/
void creat(comp *a){
	float a1,a2;
	printf("����ʵ�����鲿\n");
	scanf("%f,%f",&a1,&a2);
	a->x=a1; a->y=a2;
}
/*���һ������*/
void output(comp b){
	if(b.y<0) 
	printf("%f%f i\n",b.x,b.y);
	else
	printf("%f+%f i\n",b.x,b.y);
} 
/*�������������֮��*/
comp add(comp c,comp d){
	comp e;
	e.x=c.x+d.x;
	e.y=c.y+d.y;
	return e;
}
/*����������֮��*/
comp sub(comp m,comp n){
	comp e;
	e.x=m.x-n.x;
	e.y=m.y-n.y;
	return e;
}
/*����������֮��*/ 
comp chengji(comp m,comp n){
	comp e;
	e.x=m.x*n.x-m.y*n.y;
	e.y=m.x*n.y+m.y*n.x;
	return e;
}
