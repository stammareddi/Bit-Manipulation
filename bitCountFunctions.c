#include<stdio.h>
#include<stdlib.h>

int  oneCounter(unsigned short  int num);
int combo(unsigned short int num);
int main(int argc,char* argv[])
{
int num = atoi(argv[1]);
int parity = oneCounter(num);
int pairs = combo(num);
if(parity == 1)
{
printf("Even-Parity\t%d\n",pairs );

}else 
{
printf("Odd-Parity\t%d\n", pairs);
}


return 0;
}



int oneCounter(unsigned short  int num)
{
int counter = 0;
while(num != 0)
{
int ifone = num &1;
if(ifone == 1)
{
counter++;
}
num>>=1;
}

if(counter %2 == 0)
{
return 1;
}


return 0;

}

int combo(unsigned short  int num)
{
int counter = 0;
do
{
int ifonenext = (num>>1) & 1;
int ifone = num &1;

if(ifone == 1 && ifonenext == 1)
{
counter++;
num>>=2;

}else 
{
num>>=1;
}
}while(num != 0);


return counter;
}
