#include<stdio.h>
#include<math.h>
int
main ()
{
  int g;
  int b, h;
  int arrl[100000];
  int mod = 1000000007;

  int vol[100], maxVol = 0, sum = 0;
  scanf ("%d\n", &g);
  scanf ("%d %d\n", &b, &h);
  for (int i = 0; i < g; i++)
    {
      scanf ("%d", &arrl[i]);

    }

  for (int i = 0; i<g;i++)
    {
      int min = i;
      for (int j = i + 1; j<g; j++)
      {
	     if (arrl[j] < arrl[min])
       {
	      min = j;
      int temp = arrl[i];
      arrl[i] = arrl[min];
      arrl[min] = temp;
       }
       
       }
       
    }
    for (int i = 0; i < g; i++)
	    {  
      
	     for (int j = i+1; j < g-1 ; j++)
	     {
	      sum= sum + (arrl[i] * arrl[j]);
	     }
         vol[i]=sum;
         sum=0;
      }
	   for (int i = 0; i < g; i++)
    {
      printf("%d\n", vol[i]);

    }

      
    
    
    
 





}