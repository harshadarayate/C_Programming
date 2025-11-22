import java.util.Scanner;

class program161 
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

        for(iCnt = -iNo; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t");   
        } 

        System.out.println();
    }
}

//can two loops merge?
// if ending of first loop and starting of second loop is same
// displacement of both loop is same eiter positive or negative
// if displacement is like +2 and +1 cannot merge
