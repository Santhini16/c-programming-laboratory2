#include <stdio.h>
int main()
{
  int tam,eng,mat,sci,ss;
   scanf("%d%d%d%d%d ",&tam,&eng,&mat,&sci,&ss);
    float total,avg;
  total=tam+eng+mat+sci+ss;
  avg= total/5;
  if(total>=491 && total<=500)
  {
      printf("the grade is o");
  }
  else if(total>=471 && total<=490)
  {
      printf("the grade is A+");
  }
  else if(total>=451 && total<=470)
  {
      printf("the grade is A");
  }
  else if(total>=431 && total<=450)
  {
            printf("the grade is B+");
      
  }
  else if(total>=401 && total<=430)
  {
      printf("the grade is B");
  }
  else if(total>=250  && total<=400)
  {
      printf("the grade is P");
  }
  else if(total>=0 && total<=249);
  {
  printf("the grade is F");
  } 
}  
