import java.util.Scanner;

class program156 
{
    public static void main(String a[]) 
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency : \n");
        iValue = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue);
    }
}

class pattern 
{
    public void Display(int iNo) 
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt > 0; iCnt--)
        {
            
            
                System.out.print(iCnt+"\t");
            
            
        } 

        System.out.println();
    }
}

