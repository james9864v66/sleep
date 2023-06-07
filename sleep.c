
#include <stdio.h>
#include <unistd.h>

int main(void)
{

int i=1;
while(i)
{

sleep(5);
printf("%i\n",i);
i++;
}
return 0;
}
