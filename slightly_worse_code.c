#include<stdio.h>
#include<math.h> // This C library adds the 'pow' function

int main()
{
// c = log a b, where a^c = b;
int a,b;
float c, n, num;
float i=0;
printf("Enter the base and argument ");
scanf("%d %d", &a, &b); // The user inputs the base and argument of a logarithmic function
do // In this demonstration we basically test every exponent until we reach the value defined by int b
{
i++; // We add one to i
c=i/1000; // We divide i by 1000, so effectively we're adding 0.01 every time we run the do function
n=pow(a,c); // We raise a to the power of c
num = floor(10000*n)/10000; // We round the result
}
while(b>num); // Finally, we check if our result is equal to int b
printf("%.3lf", c); // If it is, the program prints the result. If not, the do function runs again
return 0;
}
