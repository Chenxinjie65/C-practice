#include <stdio.h>
typedef struct
{ float x;   /*实部*/ 
  float y;   /*虚部*/
} comp;

/*函数的声明*/
void creat(comp *a);
void output(comp b);
comp add(comp c,comp d);
comp sub(comp m,comp n);
comp chengji(comp m,comp n);
comp a,b,c,d,e;
/*主函数*/
int main(){
	creat(&a);   
	printf("a的值为:\n") ; 
	output(a);
	creat(&b);   
	printf("b的值为:\n") ; 
	output(b);
	c=add(a,b);
	printf("和为:\n") ;
	output(c);
	printf("a,b之差为:\n") ;
	d=sub(a,b);
	output(d);
	printf("a,b之积为:\n") ;
	e=chengji(a,b);
	output(e); 
}
/*创建一个复数*/
void creat(comp *a){
	float a1,a2;
	printf("输入实部和虚部\n");
	scanf("%f,%f",&a1,&a2);
	a->x=a1; a->y=a2;
}
/*输出一个复数*/
void output(comp b){
	if(b.y<0) 
	printf("%f%f i\n",b.x,b.y);
	else
	printf("%f+%f i\n",b.x,b.y);
} 
/*求两个复数相加之和*/
comp add(comp c,comp d){
	comp e;
	e.x=c.x+d.x;
	e.y=c.y+d.y;
	return e;
}
/*求两个复数之差*/
comp sub(comp m,comp n){
	comp e;
	e.x=m.x-n.x;
	e.y=m.y-n.y;
	return e;
}
/*求两个复数之积*/ 
comp chengji(comp m,comp n){
	comp e;
	e.x=m.x*n.x-m.y*n.y;
	e.y=m.x*n.y+m.y*n.x;
	return e;
}
