#include <stdio.h>;

int main()

{

char c;

printf("\n enter the character");

scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')

{

printf("\n the given character is a vowel");

}

else

{

printf("\n the given character is not a vowel");

}

return 0;

}