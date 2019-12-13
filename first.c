#include<stdio.h>
#include<stdlib.h>
#include<string.h>




int main(int argc, char* argv[])
{
FILE *f = fopen(argv[1], "r");

if(f == NULL)
{

return 0;
}

 int tempNum;
fscanf(f,"%d\n", &tempNum);
//printf("%d\n\n\n\n", num); // get the number
unsigned short int num = (unsigned short int)tempNum;


char str[5];
 int  x;
 int n;

  while(fscanf(f,"%s\t%d\t%d\n",str,&x,&n) != EOF)
{
if(strcmp(str,"set") == 0){ 
int b = x;
int nbit = 1<<b;

unsigned short int bset;

if(n == 1)
{
bset = num | nbit;
printf("%d\n",bset);
}
if(n == 0)
{
bset = (num & ~(nbit));
printf("%d\n",bset );
}
num = bset;
}



if(strcmp(str,"comp") == 0)  
{
num = (num^(1<<x) );
printf("%d\n",num);
}

if(strcmp(str,"get") == 0) 
{
unsigned short int b = (num >> x) &1;
printf("%d\n", b);

}
}
fclose(f);
return 0;
}
