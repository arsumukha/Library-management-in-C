#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search();
int add();
int issue();
int ret();
int view();
int db;
int admin();
int iview();
void main()
{
	system("clear");
	int y;
	int va;
	char choic[20];
	do{
		y=0;
		printf("__________LIBRARY SOFTWARE__________\n");
		printf("1.SEARCH FOR A BOOK\n\n");
		printf("2.ISSUE A BOOK\n\n");
		printf("3.RETURN A BOOK\n\n");
		printf("4.VIEW ALL BOOKS\n\n");
		printf("5.ADMIN OPTIONS(REQUIRES PASSWORD)\n\n");
		printf("6.EXIT\n\n");
		printf("PLEASE ENTER YOUR CHOICE:\n");
		scanf("%d",&va);
		switch(va){
			case 1:
			search();
			break;
			case 4:
			view();
			break;
			case 5:
			admin();
			break;
			case 2:
			issue();
			break;
			case 3:
			ret();
			break;
			case 6:
			exit(0);
			default:
			printf("PLEASE SELECT A CORRECT OPTION\n");
			break;
			}
		printf("WOULD YOU LIKE TO RETURN TO THE MAIN MENU(y/n)?\n");
		scanf("%s",choic);
		system("clear");
		if(strcmp(choic,"y")==0)
		{
			y=1;
		}
	}
	while(y==1);
}
int search()
{
	system("clear");
	int x;
	int i=1;
	int j=25;
	x=0;
	int d;
	int da;
	int mon;
	int yea;
	char e[100];
	char a[100];
	char b[100];
	char c[100]="books.txt";
	FILE *f;
	FILE*l;
	l=fopen("issue.txt","a+");
	f=fopen(c,"r");
	if(f==NULL)
	{
		printf("NO BOOKS HAVE BEEN ADDED\n");
		return 0;
	}
	printf("ENTER THE NAME OF THE BOOK WITHOUT SPACES:\n");
	scanf("%s",a);
	while(fscanf(f,"%s",b)>0)
	{
		if(strcmp(b,a)==0)
		{
			printf("THE ID OF THE BOOK IS %d\n",i);

			while(fscanf(l,"%d %s %d %d %d",&d,e,&da,&mon,&yea)>0)
			{
				if(d==i)
				{
					printf("THE BOOK HAS ALREADY BEEN ISSUED TO USN %s AND WILL MOSTLY RETURNED BY %d-%d-%d\n",e,da,mon,yea);
					return 0;
				}
			}
				if(i<5)
				{
					printf("THE BOOK IS ON RACK 1\n");
				}
				else
				{
					printf("THE BOOK IS ON RACK 2\n");
				}
			x=1;
			}
		i=i+1;
		}
	if(x==0)
	{
		printf("BOOK DOES NOT EXIST\n");
	}
	fclose(f);
	return 0;
}
int add()
{

	system("clear");
	char str3[100]="dude";
	char str2[100];
	printf("ENTER THE PASSWORD AGAIN:\n");
	scanf("%s",str2);
	system("clear");
	if(strcmp(str2,str3)!=0)
	{
		printf("WRONG PASSWORD\n");
		return 0;
	}
	int i,n;
	char str1[100];
	FILE *fp;
	fp=fopen("books.txt","a");
	printf("ENTER THE NUMBER OF BOOKS:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("ENTER A BOOK NAME:\n");
		scanf("%s",str1);
		fprintf(fp,"%s ",str1);
	}
	fclose(fp);
	return 0;
}
int issue()
{
int h=0;
int i=1;
char oi[100];
char yuyu[100];
FILE *f;
f=fopen("books.txt","r");
if(f==NULL){
printf("NO BOOKS HAVE BEEN ADDED\n");
return 0;
}
fclose(f);
int d,da,mon,yea;
char e[100];
FILE *l;
l=fopen("issue.txt","a+");
	
f=fopen("books.txt","r");			
	system("clear");
	int id;
	char usn[100];
	printf("ENTER THE ID OF THE BOOK:\n");
	scanf("%d",&id);
while(fscanf(f,"%s",oi)>0){
if(i==id){
h=0;
break;}
else{
h=1;
}
i=i+1;
}
fclose(f);
if(h==1){
printf("NO SUCH BOOK FOUND\n");
return 0;
}
while(fscanf(l,"%d %s %d %d %d",&d,e,&da,&mon,&yea)>0)
			{
				if(d==id)
				{
					printf("THE BOOK HAS ALREADY BEEN ISSUED AND WILL MOSTLY RETURNED BY %d-%d-%d\n",da,mon,yea);
					return 0;
				}
			}
fclose(l);
int hi=0;
int da4,mon4,yea4;
int d4;
	printf("ENTER YOUR USN:\n");
	scanf("%s",usn);
l=fopen("issue.txt","r");
while(fscanf(l,"%d %s %d %d %d",&d4,yuyu,&da4,&mon4,&yea4)>0){
if(strcmp(yuyu,usn)==0){
hi=hi+1;
}
if(hi==2){
printf("YOU HAVE REACHED THE LIMIT OF ISSUING THE BOOKS\n");
return 0;
}

}

	int day = 0;
      int month = 0;
      int year = 0;
      printf("ENTER TODAY'S DATE :\n");
      scanf("%d%d%d",&day,&month,&year);
      if(month<1 || month>12 || day<1 || day>31)
       {
          printf("invalid date\n");
          return 0;
       }
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
	FILE *y;
	y=fopen("issue.txt","a");
	fprintf(y,"%d %s %d %d %d ",id,usn,day,month,year);
	fclose(y);
	fclose(l);
	return 0;
}
int ret()
{
int d3,m3,y3;
char yuy[100];
FILE *fp;
fp=fopen("issue.txt","r");
fseek(fp, 0, SEEK_END);
if (ftell(fp) == 0)
 {
     printf("NO BOOKS HAVE BEEN ISSUED\n");
	return 0;
 }
fseek(fp, 0, SEEK_SET);
int h=0;

	system("clear");
	int d,m,y,idd,iddd,d2,m2,y2,d1,m1,y1,sum1,sum2;
	char yu[100];
	char a[100]="issue.txt";
	char b[100]="issues.txt";
	printf("ENTER THE BOOK ID:\n");
	scanf("%d",&iddd);
	FILE *e;
	FILE *z;
	e=fopen("issue.txt","r");
	while(fscanf(e,"%d %s %d %d %d",&idd,yu,&d3,&m3,&y3)>0){
	if(iddd==idd){h=1;break;}
	else{h=0;}

	}
fclose(e);
e=fopen("issue.txt","r");
if(h==0){printf("NO SUCH BOOK HAS BEEN ISSUED\n");
return 0;}
	z=fopen("issues.txt","w");
	while(fscanf(e,"%d %s %d %d %d",&idd,yu,&d,&m,&y)>0)
	{
		if(iddd!=idd)
		{
			fprintf(z,"%d %s %d %d %d ",idd,yu,d,m,y);
		}
		else
		{
			d2=d;
			m2=m;
			y2=y;
		
		}
	}
	int i,dif,fine;
  printf("ENTER  TODAY'S DATE\n");
  scanf("%d%d%d",&d1,&m1,&y1);
  printf("TODAY'S DATE:\t%d-%d-%d\t\tRETURN DATE:\t %d-%d-%d\n",d1,m1,y1,d2,m2,y2);
  if( d1<=d2 && m1<=m2 && y1<=y2 )
   { 
     printf("BOOK Returned successfully\n");
	remove(a);
	rename(b,a);
	fclose(e);
	fclose(z);
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
  if(y2>y1)
   {
     dif  = y2-y1;
      if (  y2%4==0 && y2%100!=0 ||y2%400==0 )
           {   sum2 = sum2 + (dif*366) ; } 
      else
           {   sum2 = sum2 + (dif*365) ; }
       
   }
   fine = sum1 - sum2 ;  
   if(fine<0){
	remove(a);
	rename(b,a);
	fclose(e);
	fclose(z);
	printf("BOOK SUCESSFULLY RETURNED\n");
	return 0;
   }
else{
  int ke;
  printf("FINE TO BE PAID: \t%d\n",fine);
  printf("ENTER THE PASSKEY GIVEN AFTER THE PAYMENT OF FINE:");
  scanf("%d",&ke);
  if(ke==8068)
{
	remove(a);
	rename(b,a);
	fclose(e);
	fclose(z);
	printf("THE BOOK HAS BEEN SUCESSFULLY RETURNED\n");
	return 0;
}
else
{
remove(b);
printf("THE PASSKEY IS WRONG PLEASE CHECK AGAIN");
fclose(e);
fclose(z);
return 0;
}
}
}
int view(){
char strl[100];
int i;
i=1;
FILE *io;
io=fopen("books.txt","r");
if(io==NULL){
printf("NO BOOKS HAVE BEEN ADDED\n");
return 0;
}
printf("BOOK ID\tBOOK NAME\n");
while(fscanf(io,"%s",strl)>0)
{
printf("%d\t%s\n",i,strl);
i=i+1;
}
fclose(io);
return 0;
}
int admin()
{
system("clear");
	char str3[100]="dude";
	char str2[100];
	printf("ENTER THE PASSWORD:\n");
	scanf("%s",str2);
	if(strcmp(str2,str3)!=0)
	{
		printf("WRONG PASSWORD\n");
		return 0;
	}
int r,yo;
char cho[10];
do
{
yo=0;
system("clear");
printf("_____________LIBRARY SOFTWARE ADMIN OPTIONS_______\n\n");
printf("1.ADD BOOKS TO LIBRARY\n\n");
printf("2.VIEW ISSUED BOOKS\n\n");
printf("ENTER YOUR CHOICE:\n");
scanf("%d",&r);
switch(r){
case 1:
add();
break;
case 2:
iview();
break;
default:
printf("PLEASE CHOOSE A CORRECT OPTION\n");
break;
}

printf("WOULD YOU LIKE TO RETURN TO THE ADMIN MENU(y/n)?\n");
		scanf("%s",cho);
		if(strcmp(cho,"y")==0)
		{
			yo=1;
		}
	}
	while(yo==1);
return 0;
}
int iview(){
int d0,m0,y0;
int ipl;
char vivo[100];
FILE *p;
p=fopen("issue.txt","r");
if(p==NULL){
printf("NO BOOKS ISSUED\n");
return 0;
}
printf("BOOK ID\t\tUSN\t\tRETURN DATE\n");
while(fscanf(p,"%d %s %d %d %d",&ipl,vivo,&d0,&m0,&y0)>0){
printf("%d\t\t%s\t\t%d-%d-%d\n",ipl,vivo,d0,m0,y0);
}
fclose(p);
return 0;
}
