import java.util.*;

class JArrDemo
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in);
System.out.println("_______Example of Simple JaggedArray_______");
int jArr[][]=new int[4][];
jArr[0]=new int[2];
jArr[1]=new int[3];
jArr[2]=new int[2];
jArr[3]=new int[3];

 System.out.println("ArayLength :"+jArr.length);


for(int i=0;i<jArr.length;i++)
{
 for(int j=0;j<jArr[i].length;j++)
 {
 System.out.print(jArr[i][j]);
 }	
System.out.println();
}
System.out.println("_______UserDefined Jagged Array_______");
System.out.println("Enter No Of Rows for Jagged Array: \t");
int r=s.nextInt();
int jjArray[][]=new int[r][];
int col[]=new int[r];
for(int i=0;i<r;i++)
{
System.out.println("Enter No of Columns in Row "+i+":  ");
col[i]=s.nextInt();
jjArray[i]=new int[col[i]];
}

System.out.println("_______Printing Empyt Array__________");
for(int i=0;i<jjArray.length;i++)
{
 for(int j=0;j<jjArray[i].length;j++)
 {
 System.out.print(jjArray[i][j]);
 }	
System.out.println();
}
System.out.println("_______Enter Elements for Array __________");
for(int i=0;i<jjArray.length;i++)
{
System.out.println("Entering elements in Row "+i+" :");
for(int j=0;j<jjArray[i].length;j++)
	{
	System.out.println("Enter element at ["+i+"]["+j+"]  :");
         jjArray[i][j]=s.nextInt();
	}
}
System.out.println("_______You have entered__________\n\n");
for(int i=0;i<jjArray.length;i++)
{
 for(int j=0;j<jjArray[i].length;j++)
 {
 System.out.print(jjArray[i][j]+" ");
 }	
System.out.println();
}

}
}
