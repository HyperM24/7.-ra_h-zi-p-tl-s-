#include <stdio.h>




int main(){

int ossz = 0;
int negy = 0;

for (int i = 1; i <= 100; i++)
{
    negy = negy + i;
    ossz = ossz + (i*i);
}

negy = negy * negy;
int eredmeny = negy - ossz;

printf("Kozti kulonbseg eredmenye: %d\n",negy - ossz);


return 0;

}