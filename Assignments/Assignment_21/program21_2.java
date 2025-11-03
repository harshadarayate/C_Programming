class Logic 
{
    void countEvenOddRange(int iNo) 
    {
        int iCnt = 0;
        int iCntEven = 0;
        int iCntOdd = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                iCntEven++;
            }
            else
            {
                iCntOdd++;
            }
        }
        System.out.println(iCntEven+" is even numbers \n"+iCntOdd+" is odd  numbers\n");
    }
}

public class program21_2 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
