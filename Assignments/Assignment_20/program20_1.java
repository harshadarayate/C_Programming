class Logic {
    void sumEvenNumbers(int iNo) {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt%2 == 0)
            {
               iSum = iSum + iCnt;
            }
        }
        System.out.println(iSum+" is the sum \n");
    }
}

public class program20_1 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}
