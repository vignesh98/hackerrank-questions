#include<stdio.h>
#include<string.h>

int main(){

int a;
scanf("%d\n",&a);
char str[100];
fgets(str,sizeof str,stdin);
printf("%s",str);
return 0;
}
