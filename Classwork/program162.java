import java.util.Scanner;

class program160 {
    public static void main(String a[]) {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency : \n");
        iValue = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue);
    }
}

class pattern {
    public void Display(int iNo) {
        int iCnt = 0;
        int iCount = 0;

        iCount = 1;
        for (iCnt = 1; iCnt <= iNo; iCnt++) 
        {
            if (iCnt % 2 == 0)
            {
                System.out.print("\t*\t");
            }
                
            else
            {
                 System.out.print(iCount);
                iCount++;
            }
               
        }

        System.out.println();
    }
}

// can two loops merge?
// if ending of first loop and starting of second loop is same
// displacement of both loop is same eiter positive or negative
// if displacement is like +2 and +1 cannot merge
