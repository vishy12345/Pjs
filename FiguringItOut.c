#include <stdio.h>
#include <math.h>

int main(){
int a = 0;
int num, remainder, divisor, n[a];
printf("Enter the value of number");
scanf("%d", &num);
divisor = 2;
a = 0;
remainder = num / divisor;
while (num > 1){
remainder = num % divisor;
    if (remainder != 0){
        divisor = divisor + 1;}
    else if (remainder == 0){
        num = num / divisor;
        a = a + 1;
        n[a] = divisor;}}
printf("%d", n);
}
