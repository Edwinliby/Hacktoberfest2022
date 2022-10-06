public class RotateMatrixClockwise  
{  
public static void main(String args[])  
{  
int a[][]= {{1,2,3},{4,5,6},{7,8,9}};    
System.out.println("Original Matrix: \n");  
  
for(int i=0;i<3;i++)  
{  
 
for(int j=0;j<3;j++)  
{  
System.out.print(" "+a[i][j]+"\t");  
}  
System.out.println("\n");  
}  
System.out.println("Rotate Matrix by 90 Degrees Clockwise: \n");  
for(int i=0;i<3;i++)  
{  
for(int j=2;j>=0;j--)  
{  

System.out.print(""+a[j][i]+"\t");  
}  
System.out.println("\n");  
}  
}  
}   
