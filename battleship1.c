#include<stdio.h>
#include<string.h>

int grid;
int ship;
int placeship;//the ship being placed in the grid
int rc; //my row and colums
void random_shop (int rc);
int main()
{
printf("Battleship");//title
printf(" made by josh Lagunas");
int rc;
int ship;
int random;
int a,b; //my x axis and my y axis.
rc = 1; //minimum of 2x2
ship = 5;
int arrayrc[10] [10]; {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0;};
for (a=0; a<rc; a++)
{
   random = (rand()%rc);
   for (b=0; b<rc; b++)
   {
      if (random==b)//inserts a ship in the row
      {
         ship++;
         
      } else if (a>(rand()%rc+1)) // insert a ship in the column
      {
         ship++;
      }
      
   }
   
}// ends the random ship placement/*
}
