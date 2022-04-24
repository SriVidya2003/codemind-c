#include <stdio.h>
int main()
{
  int Number, i = 0, Next, First_Value = 0, Second_Value = 1;

  
  scanf("%d",&Number);
  
  while(i < Number) 
  {
  	if(i <= 1)
  	{
  		Next = i;
	}
	else
	{
		Next = First_Value + Second_Value;
		First_Value = Second_Value;
		Second_Value = Next;
	}
    printf("%d ", Next);
   	i++;  
  }
  return 0;
}