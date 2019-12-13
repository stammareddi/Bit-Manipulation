#include<stdio.h>
#include<stdlib.h>

int isBitPalindrome(unsigned long int x) {

int num = x;
int counter = 15;
while(counter >= 0)
{
int isFrontPalindrome = ((num>>counter)&1);
int isLastPalindrome = ((num>>(15-counter))&1);
if(isFrontPalindrome != isLastPalindrome)
{
return 0;
}
counter = counter -1;
}

return 1;


}

int main (int argc, char  *argv[])
{

int num = atoi(argv[1]);
int ans = isBitPalindrome(num);
if(ans == 1)
{
printf("Is-Palindrome\n");
}else 
{

printf("Not-Palindrome\n");
}


return 0;
}

