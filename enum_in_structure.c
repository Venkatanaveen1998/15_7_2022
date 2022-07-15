#include <stdio.h>
struct student
{
    int marks;
    float percentage;
    enum check{Agrade=75,Bgrade=60,Cgrade=35,ffail=34}grades;
}result;
int main()
{
  scanf("%d",&result.marks);
 result.grades=Agrade;
  if(result.marks>=result.grades)
  printf("First class = %d \n",result.marks);
  else if((result.grades=Bgrade)&&(result.marks>=result.grades))
  printf("second class = %d \n",result.marks);
  else if((result.grades=Cgrade)&&(result.marks>=result.grades))
  printf("third class = %d \n",result.marks);
  else if((result.grades=ffail)&&(result.marks<=result.grades))
  printf("fail = %d \n",result.marks);
}
