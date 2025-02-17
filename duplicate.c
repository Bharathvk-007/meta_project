#include<stdio.h>
int main(){
int i,n,array1[3]={1,2,3};
printf("enter the value n");
scanf("%d",&n);
if(array1[0]==n||array1[1]==n||array1[2]==n){
printf("this is original");
}
else{
printf("this is duplicate");
}
}

