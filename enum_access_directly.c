#include <stdio.h>
enum days{sun,mon,tue,wed,thu,fri,sat};
int main()
{
   enum days today;
   today=mon;
   if(today==sun) printf("holiday\n");
   else if(today==sat) printf("holiday\n");
   else printf("working day\n");
}
