#include<stdio.h>




   int main()
  { 
      int day = 0;
      int month = 0;
      int year = 0;
      printf("Enter today's date :\n");
      scanf("%d%d%d",&day,&month,&year);
      day=day+15;
         if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            {   
                 if(day>31)
                   {  
                      if(month==12)
                        {  
                            day=day-31;
                            month=1;
                            year=year+1;
                        }
                      else
                        {
                            day=day-31;
                            month=month+1;
                        }
                   }
            }
        else if(month==2)
            {
                 if(day>28)
                  {
                     if(year%4==0 && year%100!=0 || year%400==0)
                            {  
                                day=day-29;         
                            }
                     else
                            {
                                day=day-28;   
                            }
                     month=month+1;
                   }
            }
        else if(month==4||month==6||month==9||month==11)
            {
                  if(day>30)                      
                   {   
                      month=month+1;
                      day=day-30;
                   }
            }
      printf("RETURN DATE:\t%d-%d-%d\n",day,month,year);
return 0;
}















