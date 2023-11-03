#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50
#define BIT 32
void sorting();
void sort(int *ptr,int r);
void string();
void string1(char str1[],char str2[]);
void toggle();
int main()
{
	int choice;
	while(1)
	{
	printf("1:sorting,2:string,3:toggle,4:exit");
	scanf("%d",&choice);
       switch(choice)
	{
	case 1:sorting();
	       break;

	case 2:string();
	       break;

	case 3:toggle();
	       break;

	case 4:exit(0);
	}
        }
}
void sorting()
{
	int *ptr;
	int r;
	printf("enter rows");
	scanf("%d",&r);
	ptr=((int*)malloc(r*sizeof(int)));
        int i;
	printf("enter a values");
       for(i=0;i<r;i++)
       {
       scanf("%d",&ptr[i]);
       }
       sort(ptr,r);
}
void string()
{
      
       char str1[MAX];
       char str2[MAX];
       printf("enter a string");
       scanf("%s",str1);
       string1(str1,str2);
    
}
void toggle()
{
	int n,bit;
	printf("give number and bit position");
	scanf("%d%d",&n,&bit);
	int p,value;
	for(p=BIT;p>=0;p--)
        {
		value=n^(1<<bit);
	}
	printf(" after the toggle nth bit value changed as %d",value);
	printf("\n");
}
void string1(char str1[],char str2[])
{
	int k,l=0;
       for(k=0;str1[k]!='\0';k++)
       {
       if(((str1[k]>='A')&&(str1[k]<='Z'))||((str1[k]>='a')&&(str1[k]<='z')))
	{
		str2[l]=str1[k];
		++l;
	}
       else
	 {
         continue;
         }
       }
       str2[l]='\0';
       printf("%s",str2);
       printf("\n");
}
void sort(int *ptr,int r)
{
int i,j,temp;
     for(i=0;i<r;i++)
      {
       for(j=0;j<=r;j++)
        {

       if(ptr[j]>ptr[j+1])
         {
         temp=ptr[j];
         ptr[j]=ptr[j+1];
         ptr[j+1]=temp;
         }

	}
     }
       for(i=1;i<=r;i++)
       {
       printf("%d",ptr[i]);
       }
       printf("\n");
}





