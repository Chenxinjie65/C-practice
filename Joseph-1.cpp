#include <stdio.h>
/*Լɪ������*/
/*�� N ���ˣ����� m ���С�������еı��˳��*/ 
/*������ʵ��*/ 
int main(){
	int N,m,i,j,b=0,g=0;    /*N����,���� m ����*/
	printf("���ж��ٸ��ˣ�N= \n");
	scanf("%d",&N);
	int a[N];
	printf(" \n ���������У�m= \n");
	scanf("%d",&m);
	for(i=0;i<N;i++) a[i]=i+1;     /*���*/
	printf("�������Ϊ�� \n");
	for(i=0;i<N;i++)               /*���ѭ�� N �Σ���� N �����*/ 
	{   for(j=g;j<=N*N+g;j++)          /*�ڲ�ѭ�� m �Σ����� m ���һ��*/ 
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
