#include <stdio.h>
#include <stdlib.h>
void cube(int a);
int main()
{int x,CUBE;
scanf("%d",&x);
cube(x);
return 0;
}
void cube(int a)
{int CUBE;
CUBE=a*a*a;
printf("%d",CUBE);
}
