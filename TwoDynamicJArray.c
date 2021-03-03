//TwoDynamicJArray.c
#include<stdio.h>
#include<stdlib.h>
/*
Step1:Declare an array of pointers (jagged array)
*The size of this array will be the number of rows required in the Jagged array

Step2:Then for each pointer in the array allocate memory for the number of elements you want in this row. 
*/
int main()
{
printf("--------------------\n");
printf("###########################\n");
printf("\n\n#### Jagged Dimensional Array ####\n\n");
printf("Enter Details of your JaggedArray:\n\nEnter no of Rows : ");
int r=0;
scanf("%d",&r);//enter 2

//Step 1
int* jagged[r];
int col[r];
//4- 3-
for(int i=0;i<r;i++)
{
  printf("Enter No of Cols for Row  %d :  ",i);
  scanf("%d",&col[i]);
jagged[i]=malloc(sizeof(int)*(col[i]));

}


//array to hold size of each row
int size[]={4,3};
int k=0;
int num=100;

//UserEnters the nos:
//enter 4 in 1st Row
//2 in 2nd row

for(int i=0;i<r;i++)
{
int* p=jagged[i];
printf("\nEntering element for Row:%d \n",i);
 for(int j=0;j<col[i];j++)
  {
printf("\nEnter for Row %d ,column %d  :   ",i,j);
scanf("%d",&num);
  *p=num;
  p++;		//mov pointer
  }
// col[i]++;
}
k=0;
//Display elements in Jagged

for(int i=0;i<r;i++)
{
int* p=jagged[i];
for(int j=0;j<col[i];j++)
  {
  printf("%d\t",*p);
  p++;
  }
printf("\n");
//col[i]++;
//mov pointer to next row
jagged[i]++;
}

return 0;

}
