#include<stdio.h>



int numofv,sq,fty,up,TotT1,TotT2 ,com,QuaR1=1000,QuaR2=1000 ;

int fnInput()
{
    printf("Enter quantity: ");
    scanf("%d", &sq);
    printf("Enter fuel type (1 or 2): ");
    scanf("%d", &fty);
    printf("Number of vehicles: ");
    scanf("%d", &numofv);
    fncal(sq, fty, numofv);
    return 0;
}


 int fncal (int a, int b ,int c)
 {
     if ( b == 1)
     {
         TotT1 = TotT1 + (a * c);
         QuaR1 = QuaR1 - (a * c);
     }

     else if (b == 2)
     {
         TotT2 = TotT2 + (a * c);
         QuaR2 = QuaR2 - (a * c);

     }
     else
     {
         printf ("Wrong Input\n");
     }

    fnDisplay ( TotT1 ,TotT2 ,QuaR1 ,QuaR2);

    return 0;
 }


 int fnDisplay (int w ,int x,int y,int z)
 {
     printf ("%d Used from fuel type 1\n",w);
     printf ("%d Used from fuel type 2\n",x);
     printf ("%d Remaining from fuel type 1\n",y);
     printf ("%d Remaining from fuel type 2\n",z);

     return 0;
 }

 int main()
 {

     while (com !=2)
     {
         printf ("\nEnter add inputs \nEnter 2 Exit \nEnter your command :");
         scanf ("%d" , &com);

         switch (com)
         {
         case 1 :
            fnInput ();
            break;

         case 2:
            break;

         default :
             printf("Wrong Input\n");
             break;

         }
     }
     return 0;
 }

