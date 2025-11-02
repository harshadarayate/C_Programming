class Logic {
    void findFactorial(int iNo) {
        int iFact = 1;
        for(int iCnt = 1; iCnt <=iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        System.out.println("Factorial : "+iFact);
    }
}

class program16_3 {
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}