#include <stdio.h>
int main(void)
{
	int i,j,k,h;
	printf("�п�J3�Ӥ��P��Ƨ@�ƦC:\n");
	scanf("%d%d%d",&i,&j,&k);
	if(i>j){
		h=i;
		i=j;
		j=h;
	}
	if(i>h){
		h=i;
		i=k;
		k=h;
	}
	if(j>k){
		h=j;
		j=k;
		k=h;
	} 
	printf("�q�p�ƨ�j�O:%d %d %d\n",i,j,k);
	return 0;
}
