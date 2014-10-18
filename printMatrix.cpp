//inkey loop  code by cwcoleman
//char to int type cast ascii and game control with numbers
#include <stdio.h>
#include <stdlib.h>
#include  <conio.h>
#include <time.h>
void Display (int h, int k);

int main()
{
    int h,k, jump = 0;
     srand (time(NULL));
     h = rand() % 10 ;   /* generate secret number between 0 and 10: */
      k = rand() % 10 ;   /* generate secret number between 0 and 10: */
       Display(h,k);
         printf( " USE THE ARROW KEYS AND SPACE ");
	int asc;
	bool done = false;
    char input;

	// game loop
	while(!done){
			input = getch();
			asc = (int)input;
			//printf(" %d ",asc);
			if (asc == 75){
                    system ("CLS");
                    h = h -1;
                    Display(h,k);
                    printf(" LEFT \n");
            }
			if (asc == 77){
                system ("CLS");
                h = h + 1;
                Display(h,k);
                 printf(" RIGHT \n");
            }
			if (asc == 72){
                system ("CLS");
                k = k - 1;
                Display(h,k);
                  printf(" UP \n");
            }
			if (asc == 80){
                system ("CLS");
                k = k + 1;
               Display(h,k);
                printf(" DOWN \n");
            }
			if (asc == 32 ) {
                     system ("CLS");
                h = h + 2;
                k = k + 2;
                
               Display(h,k);
                printf(" JUMP ");
                jump++;
            }
            if (asc == 27){
                done = true;
                printf( " CIAO ");
            }
	}
}

void Display(int h, int k) {
    int x, y;
    for (y = 0; y < 10; y++){
        for (x = 0; x < 10; x++){
            //printf (" %d,%d ", x,y);
            if ((x == h )&&(y == k)){printf ("(%d,%d)",h,k);}
            else {
                printf (" *,* ");
            }
        }//end y
        printf("\n");
    }//end x

}


