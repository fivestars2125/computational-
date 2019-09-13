#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x -4*x +1

main()
{
    float x0,x1,x2;
    float f0,f1,f2;
    int i = 0;
    printf("enter the values for x0 and x1 \n");
    scanf("%f  %f",&x0,&x1);
    do
    {
       f0 = f(x0);
       f1 = f(x1);
       x2 = (x0+x1)/2;
       f2 = f(x2);
       if (f0*f2<0)
       {
           x1 = x2;
       }
       else
       {
           x0 = x2;
      }
      i++;
       printf("number pf iterations : %d \n",i);
       printf("root :%f \n",x2);
       printf("value of function : %f \n",f2);
    } while (fabs(f2)>e);
    getch();
}
