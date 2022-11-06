#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>


// cartas
#define MAXCARTAS   52
#define MAXCARTAREP 11
#define ESP          4
#define CANTCARTINI  2
#define ESC         27

#define CORAZON      3
#define DIAMANTE     4
#define TREBOL       5
#define PIQUES       6

// Cuadro
#define DIM     4
#define VALINI -1
#define ESP     2

#define ESC    27
#define ENTER  13

#define DERECHA   77
#define IZQUIERDA 75
#define ABAJO     80
#define ARRIBA    72

#define CF   BLUE
#define CT   WHITE

#define CFS  BLACK
#define CTS  RED




// funciones carta
int simbolocarta(int);
int valorcarta(int);
int tomarcarta(int []);
int randrange(int,int);


// funciones cuadro
void initcuadro(int [][DIM],int);
int existe(int [MAXCARTAS],int);
int cuadro_incompleto(int [][DIM]);
void gencuad(int [][DIM],int[MAXCARTAS],int);
void showcuad(int [][DIM],int,int,int,int,int,int);
void movcuad(int [][DIM],int,int,int);
int randrange(int,int);
void setcolor(int,int);
void colordefault(void);




int main()
{
    int mazo[MAXCARTAS] = {0};
    char tecla;


    // Cuadro
    srand(time(NULL));
    int cuadro[DIM][DIM] = {-1};
    initcuadro(cuadro,DIM);
    gencuad(cuadro,mazo,DIM);
    movcuad(cuadro,DIM,5,5);


     return 0;
}


//funciones carta

int randrange(int a, int b)
{
   return rand() % (b-a+1) + a;
}

int simbolocarta(int indice)
{
   return indice % 4;
}

int valorcarta(int indice)
{
   return indice / 4 + 1;
}

int tomarcarta(int mazo[])
{
   int carta;

   do{
      carta = randrange(0,MAXCARTAS-1);
   }while ( mazo[carta] == 1 );

   mazo[carta] = 1;
   return carta;
}


// funciones cuadro
void gencuad(int cuadro[][DIM],int mazo[MAXCARTAS],int dim)
{
   int indfil1,indcol1,indfil2,indcol2,indcarta;

    do{
        // verficar que la carta generada no este repetida
        do{
         indcarta = randrange(0,MAXCARTAS-1);
        }while ( existe(mazo,indcarta));

        mazo[indcarta] = 1; // indicar que la carta existe.


        // verficar que la posicion del cuadro generada no este ocupada.
        do{
         indfil1 = randrange(0,dim-1);
         indcol1 = randrange(0,dim-1);

        }while (cuadro[indfil1][indcol1] != -1 );

        cuadro[indfil1][indcol1] = indcarta;

        do{
         indfil2 = randrange(0,dim-1);
         indcol2 = randrange(0,dim-1);

        }while (cuadro[indfil2][indcol2] != -1);

        cuadro[indfil2][indcol2] = indcarta;


    }while(cuadro_incompleto(cuadro));

}


void initcuadro(int cuadro[][DIM],int dim)
{
   int indfil,indcol;

   for (indfil = 0; indfil < dim; indfil ++ )
      for (indcol = 0; indcol < dim; indcol ++ )
         cuadro[indfil][indcol] = VALINI;
}





int existe(int mazo[MAXCARTAS], int ind)
{
    if(mazo[ind] == 1){
        return 1;
    }
    else{
        return 0;
    }

}

int cuadro_incompleto(int cuadro[][DIM])
{
    int indfil,indcol;

    for(indfil = 0; indfil < DIM; indfil++){
        for(indcol = 0; indcol < DIM; indcol++){

            if(cuadro[indfil][indcol] == -1){
                return 1;  // cuadro esta incompleto
            }

        }

    }

    return 0;  // cuadro esta completo

}

void setcolor(int ct,int cf)
{
   textcolor(ct);
   textbackground(cf);
}

void colordefault()
{
   setcolor(WHITE,BLACK);
}

void movcuad(int cuadro[][DIM],int dim,int posx, int posy)
{
   char keypress;
   int indfil,indcol,filnew, colnew;

   indfil = indcol =  filnew = colnew = dim-1;

   int enter = -1; // condicion inicial, cuando nadie le ha dado a enter.

   _setcursortype(0);
   do{
      showcuad(cuadro,dim,posx,posy,filnew,colnew,enter);
      do{
         keypress = getch();
      }while(keypress != ESC && keypress != ARRIBA &&
             keypress != ABAJO && keypress != IZQUIERDA &&
             keypress != DERECHA);

      if ( keypress == ARRIBA )
      {
         if ( indfil > 0 )
            filnew = indfil - 1;
         else
            printf("\a");
      }

      if ( keypress == ABAJO )
      {
         if ( indfil < (dim-1) )
            filnew = indfil + 1;
         else
            printf("\a");
      }

      if ( keypress == IZQUIERDA )
      {
         if ( indcol > 0 )
            colnew = indcol - 1;
         else
            printf("\a");
      }

      if ( keypress == DERECHA )
      {
         if ( indcol < (dim-1) )
            colnew = indcol + 1;
         else
            printf("\a");
      }

      if( keypress == ENTER ){
          enter = 1;
          printf("Se presiono Enter \n");
      }

      printf("%c \n",&keypress);


    /*
      if ( indcol != colnew || indfil != filnew )
      {
         valtemp = cuadro[filnew][colnew];
         cuadro[filnew][colnew]  = cuadro[indfil][indcol];
         cuadro[indfil][indcol] = valtemp;
         indcol = colnew, indfil = filnew;


         if ( ordenado(cuadro,dim) )
         {
            showcuad(cuadro,dim,posx,posy);
            gotoxy(posx,posy+dim+2);
            printf("Felicidades! Has ordenado el cuadro!");
            keypress = ESC;
         }
      }
      */

     // resetear todas las variables.

      indcol = colnew, indfil = filnew;
      enter = -1;

   }while (keypress != ESC);

   _setcursortype(100);
}


int ordenado(int cuadro[][DIM],int dim)
{
   int indfil, indcol, ant = cuadro[0][0];

   for ( indfil = 0; indfil < dim; indfil ++ )
   {
      for (indcol = 0; indcol < dim; ant = cuadro[indfil][indcol],indcol ++ )
      {
         if ( ant > cuadro[indfil][indcol] &&
             !(indfil == dim-1 && indcol == dim-1) )
            return 0;

      }
   }
   return 1;
}

