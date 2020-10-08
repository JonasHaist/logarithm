#include<stdio.h>
#include<math.h>
int main(){
float c, n, num;
float i=0;
int a,b;
printf("Enter the base and argument ");
scanf("%d %d", &a, &b);
do{
i++;
c=i/1000;
n=pow(a,c);
num = floor(10000*n)/10000;
}
while(b>num);
printf("%.3lf", c);
return 0;
}
