
#include <stdio.h>
#include <windows.h>
int main()
{
   int h, m, s;
   int d = 1000;
   printf("Set time :\n");
   printf("Enter hour:");
   scanf("%d", &h);
   printf("Enter Minutes:");
   scanf("%d", &m);
   printf("Enter Seconds:");
       scanf("%d", &s);
   if (h > 12 || m > 60 || s > 60)
   {
      printf("Error ! please try again");
      exit(0);
   }
   while (1)
   {
      s++;
      if (s > 59)
      {
         m++;
         s = 0;
      }
      if (m > 59)
      {
         h++;
         m = 0;
      }
      if (h > 12)
      {
         h = 1;
      }
      printf("\n Clock : ");
      printf(" %02d: %02d: %02d ", h, m, s);
      Sleep(d);
      system("cls");
   }
}
