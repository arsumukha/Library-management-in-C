#include<stdio.h>

int main()
{
  int d1,d2,m1,m2,y1,y2,sum1,sum2;
  int i,dif,fine;
  printf("ENTER  TODAY'S DATE\n");
  scanf("%d%d%d",&d1,&m1,&y1);
  printf("ENTER RETURN DATE\n");
  scanf("%d%d%d",&d2,&m2,&y2);
  printf("TODAY'S DATE:\t%d-%d-%d\t\tRETURN DATE:\t %d-%d-%d\n",d1,m1,y1,d2,m2,y2);
  if( d1<=d2 && m1<=m2 && y2==y1 )
   { 
     printf("BOOK Returned successfully\n");
     return 0;
	
   }
  else
   {
     sum1 =0; sum2=0;
     for(i=1;i<=m1;i++)
      {  if ( i==1)
        {
           sum1 = sum1+ d1;
        }
        else if(i==2)
        { 
          if (  y1%4==0 && y1%100!=0 ||y1%400==0 )
           {   sum1 = sum1 + 29; } 
          else
           {   sum1 = sum1 + 28; }
        }
       else if (i==3|| i==5||i==7||i==8||i==10||i==12)
       { 
          sum1= sum1 + 31;
       }
      else if( i==4 || i==6 || i==9 || i==11)
       {   
          sum1 = sum1 + 30;
       }

     } 
    for(i=1;i<=m2;i++)
     {  if ( i==1)
       {
           sum2 = sum2+ d2;
       }
        else if(i==2)
       { 
           if (  y2%4==0 && y2%100!=0 ||y2%400==0 )
            {   sum2 = sum2 + 29; } 
           else
            {   sum2 = sum2 + 28; }
       }
        else if (i==3|| i==5||i==7||i==8||i==10||i==12)
       { 
          sum2 = sum2 + 31;
       }
       else if( i==4 || i==6 || i==9 || i==11)
       {   
          sum2 = sum2 + 30;
       }

    } 
 }
  if(y1>y2)
   {
     dif  = y1-y2;
      if (  y1%4==0 && y1%100!=0 ||y1%400==0 )
           {   sum1 = sum1 + (dif*366) ; } 
      else
           {   sum1 = sum1 + (dif*365) ; }
       
   }
   fine = sum1 - sum2 ;  
  printf("fine : \t%d\n",fine);
  return 0;
}      
         
