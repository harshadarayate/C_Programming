import java.util.Scanner;

class program154 
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

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            // if(iCnt%2 != 0)
            // {
            //     System.out.print(iCnt+"\t*\t");
            // }

             if((iCnt % 2) == 0)
            {
                System.out.print("\t*\t");
            }
            else
            {
                System.out.print(iCnt);
            }
            
        } 
        System.out.println();
    }
}

