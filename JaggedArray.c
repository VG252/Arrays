//JaggedArray.c
#include<stdio.h>
int main()
{
printf("--------------------\n");
printf("###########################\n");
printf("\n\n#### Jagged Dimensional Array ####\n\n");
int jOne[4][4]={{1,2,3},{4,5},{6,7,8},{9,10}};

printf("\njOne : %d",jOne);
printf("\nsize of jOne : %d",sizeof(jOne));
printf("\n\n###########################\n");

int row0[4]={1,2,3,4};
int row1[2]={5,6};

int* jagged[2]={ row0,row1 };
printf("\nNew JaggedArray:\n jagged :%d",jagged);
printf("\nSize of jagged[] :%d",sizeof(*jagged));


//Array to Hold the size of each Row
int size[2]={4,2},k=0;
//to display element of jagged array

for(int i=0;i<2;i++)
{
//pointer to hold addrs of row
int* ptr=jagged[i];
for(int j=0;j<size[k];j++)
	{
	printf("%d",*ptr);
//move the pointer to 
//next element in row
ptr++;
	}
printf("\n");
//move pointer to next Row
k++;
}

return 0;
}
