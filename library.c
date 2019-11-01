#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int search();
int add();
void issue();
/*void ret();
void fine();*/
void main(){
int y;
int va;
char choic[20];
do{
y=0;
printf("__________LIBRARY SOFTWARE__________\n");
printf("1.SEARCH FOR BOOK\n");
printf("2.ISSUE A BOOK\n");
printf("3.RETURN A BOOK\n");
printf("4.CHECK FOR FINE\n");
printf("5.ADD BOOKS\n");
scanf("%d",&va);
switch(va){
case 1:
search();
break;
case 5:
add();
break;
case 2:
issue();
/*case '3':
ret();
case '4':
fine();*/
default:
printf("PLEASE SELECT A CORRECT OPTION\n");
break;
}
printf("DO YOU WANT TO CONTINUE(Y/N):\n");
scanf("%s",choic);
if(strcmp(choic,"y")==0){
y=1;
}
}
while(y==1);
}
int search(){
int x;
int i=1;
int j=25;
x=0;
int d;
char e[100];
char a[100];
char b[100];
char c[100]="books.txt";
FILE *f;
FILE *l;
FILE *r;
r=fopen("issue.txt","a");
fclose(r);
l=fopen("issue.txt","r");
f=fopen(c,"r");
printf("Enter the name of the book\n");
scanf("%s",a);
while(fscanf(f,"%s",b)>0){
if(strcmp(b,a)==0){
printf("THE ID OF THE BOOK IS %d\n",i);
while(fscanf(l,"%d %s",&d,e)>0){
if(d==i){
printf("THE BOOK HAS ALREADY BEEN ISSUED TO USN %s\n",e);
return 0;
}
}
if(i<15){
printf("THE BOOK IS ON RACK 1");
}
else{
printf("THE BOOK IS ON RACK 2");
}
x=1;
break;
}
i=i+1;
}
if(x==0){
printf("BOOK NOT FOUND\n");
}
fclose(f);
}
int add(){
char str1[100];
char str2[100];
char str3[100];
FILE *fp;
fp=fopen("books.txt","a");
printf("ENTER BOOK NAME WITHOUT ANY SPACES AND HIT ENTER:\n");
scanf("%s%s%s",str1,str2,str3);
fprintf(fp,"%s %s %s",str1,str2,str3);
fclose(fp);
return 0;
}
void issue(){
int id;
char usn[100];
printf("ENTER THE ID OF THE BOOK:\n");
scanf("%d",&id);
printf("ENTER YOUR USN:\n");
scanf("%s",usn);
FILE *y;
y=fopen("issue.txt","a");
fprintf(y,"%d %s ",id,usn);
fclose(y);
}

