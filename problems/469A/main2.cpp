#include <stdio.h>
#include <stdlib.h>
#define true 1

int main()
{
    int n=0,p=0,ai=0,pasarlevel=0;
    do{
        scanf("%d",&n);
    }while(1>=n && n>=100);
    do{
        scanf("%d",&p);
    }while(0>=p && p>=n);

    int peqx[p];
    for(int cont=0;cont<p;cont++)
    {
        scanf("%d",&peqx[cont]);
    }

    do{
        scanf("%d",&ai);
    }while(1>=ai && ai>=100);

    int peqy[ai];
    for(int ind=0;ind<ai;ind++)
    {
        scanf("%d",&peqy[ind]);
    }


    for(int cont=0;cont<=n;cont++)
    {
        int ganador=0;
        for(int ind=0;ind<p;ind++)
        {
            if(peqx[ind]==cont)
            {
                ganador=true;
                //printf(" valor cont %d, valor dle jugador x %d\n",cont,peqx[ind]);
            }

        }
        for(int ind=0;ind<ai;ind++)
        {
            if(peqy[ind]==cont)
            {
                ganador=true;
                //printf(" valor cont %d, valor dle jugador y %d\n",cont,peqy[ind]);
            }
        }
        if(ganador==true)
        {
            pasarlevel++;
            //printf("pasar es %d\n",pasarlevel);
        }
        //printf("val cont %d\n",cont);
    }

    if(pasarlevel==n)
    {
        printf("I become the guy.");
    }
    else if(pasarlevel!=n)
    {
        printf("Oh, my keyboard!");
    }
}