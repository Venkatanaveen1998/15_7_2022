#include <stdio.h>
enum days{sun,mon,tue,wed,thu,fri,sat};
int main()
{
   enum days today;
   int i;
   printf("enter the today 1.sun ,2.mon ,3.tue ,4.wed ,5. thu ,6.fri ,7.sat enter the number\n");
   scanf("%d",&i);
   today=i;
   if(today==sun) printf("holiday\n");
   else if(today==sat) printf("holiday\n");
   else printf("working day\n");
   printf("size of enum = %d \n",sizeof(m1));
}
