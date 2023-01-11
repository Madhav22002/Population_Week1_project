#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n,m,b,d,y ;
    do
    {
        n=get_int("start size: ");
    }
    while(n < 9);

    // TODO: Prompt for end size
do
{
m=get_int("end size:");
}
while(m<n);
    // TODO: Calculate number of years until we reach threshold
for(y=0;n < m; y++)
{
//b is birth rate and d is death rate
b=n/3;
d=n/4;
n=n+b-d;
}
    // TODO: Print number of years
{
    printf("the number of years is: %i\n",y);
}

}
