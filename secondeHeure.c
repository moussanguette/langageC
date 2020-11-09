/*
	consersion des secondes en heures, minutes et secondes
*/
#include<stdio.h>
int main(){
	int h,m,s;
	printf("donner le nombre de seconde !");
	scanf("%d",&s);
	h=s/3600;
	m=(s%3600)*60/3600;
	s=(((s%3600)*60)%3600)*60/3600;
	printf("%dH : %dM : %dS\n",h,m,s);
}
	