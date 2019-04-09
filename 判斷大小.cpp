#include <stdio.h>
int main(void)
{
	int i,j,k,h;
	printf("請輸入3個不同整數作排列:\n");
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
	printf("從小排到大是:%d %d %d\n",i,j,k);
	return 0;
}
