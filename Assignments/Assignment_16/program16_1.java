
class Logic {

    void calculateSum(int iNo1) {
        int iCnt = 0;
        int iSum = 0;

        for (iCnt = 1; iCnt <= iNo1; iCnt++) 
        {
            iSum = iSum + iCnt;
        }
        System.out.println("Sum of Natural Numbers is : "+iSum);
    }
}

class program16_1{
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}