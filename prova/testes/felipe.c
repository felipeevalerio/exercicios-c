#include <stdio.h>
#include <stdlib.h>


float felipe(int n)
{
int deno=1,num=2;
float res,fra,sinal=1;
char s;
sinal= -1;
s ='-';
fra = (float) num / deno * sinal;
res += fra;
if(n == 1)
{
printf("%c %d/%d=%f",s,num,deno,res);
}
else
{
printf(" %c %d/%d",s,num,deno);
for(int i=2; i<=n; i++)
{
deno += 2;
num += 3;
if(i % 2 == 0)
{
sinal = 1;
s = '+';
}
else
{
sinal = -1;
s = '-';
}
fra = (float) num / deno * sinal;
res += fra;


printf(" %c %d/%d",s,num,deno);
}


}


return res;
}


