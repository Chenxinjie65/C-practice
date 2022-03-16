#include <stdio.h>
/*约瑟夫问题*/
/*有 N 个人，数到 m 出列。输出出列的编号顺序*/ 
/*用数组实现*/ 
int main(){
	int N,m,i,j,b=0,g=0;    /*N个人,数到 m 出列*/
	printf("共有多少个人？N= \n");
	scanf("%d",&N);
	int a[N];
	printf(" \n 数到几出列？m= \n");
	scanf("%d",&m);
	for(i=0;i<N;i++) a[i]=i+1;     /*编号*/
	printf("输出序列为： \n");
	for(i=0;i<N;i++)               /*外层循环 N 次，输出 N 个序号*/ 
	{   for(j=g;j<=N*N+g;j++)          /*内层循环 m 次，数到 m 输出一个*/ 
		{   if(j>N-1) 	j=j%N;
		    if(a[j] != 0) b++;
		    if(b == m) {
		    a[j]=0;
			g=j+1;
			b=0;
			break;	
		   }
		 }
	 printf("%d    ",j+1); 
	 } return 0;
}
