//Pattern A-24
/*

  * * * *
  * @ @ *
  * @ @ *
  * * * *
  
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i=0,j=0;
    int iNo=0;
    for(i=1;i<=iRow;i++)
    {
      
        for(j=1;j<=iCol;j++) //inner
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
        }
        printf("\n");
    }
   
    
   
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Row: ");
    scanf("%d",&iValue1);

    printf("Enter Column: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}