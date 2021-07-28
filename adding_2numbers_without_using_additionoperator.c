#include<stdio.h>

int sum(int a,int b);

int main(){
int x,y;
printf("enter the value of x and y respectively:");
scanf("%d  %d",&x,&y);
printf("\n");
printf("the sum of x and y :%d",sum(x,y));
return 0;
}

int sum(int a,int b){
 
 if(a==0 )return b;
 a--;
 b++;
 sum(a,b);
 
}
//find_adding_all_integers_+veand-ve-both_withoput using_sumoperators
