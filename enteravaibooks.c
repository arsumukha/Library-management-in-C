#include<stdio.h>
int main(){
char str1[20];
char str2[20];
char str3[20];
FILE *fp;
fp=fopen("books.txt","w");
printf("Enter a book name:\n");
scanf("%s %s %s",str1,str2,str3);
fprintf(fp,"%s %s %s",str1,str2,str3);
fclose(fp);
return 0;

}

