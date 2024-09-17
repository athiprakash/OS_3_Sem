#include<stdio.h>


int sub(int x, int y){
if x>y
  return x-y;
else
  return y-x;
}
int add(int x, int y){

  return x+y;

}
int div(int x,int y){
  if y!=0
    return x/y;

}

void main(){

printf("enter two numbers x and y\n");
scanf("%d%d\t",&x&y);
add();
sub();
}
