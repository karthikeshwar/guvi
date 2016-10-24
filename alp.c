#include <stdio.h>;
int main()
{
char c;
printf("\n enter the character");
scanf("%c",&c);
if(c>='a' && c<='z'||c>='A' && c<='z')
{
printf("\n the given character is a alphabet");
}
else
{
printf("\n the given character is not a alphabet");
}
return 0;
}
