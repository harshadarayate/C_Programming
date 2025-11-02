
class Logic {
    void checkPrime(int iNo) {
        int iCnt = 0;
        int iFlag = 0;

        for (iCnt = 2; iCnt < iNo; iCnt++) {
            if (iNo % iCnt == 0) 
            {

                iFlag = 1;        
            } 
        }

        if(iFlag == 0)
        {
            System.out.println("The number is prime");
        }
        else{
            System.out.println("The number is not prime");
        }
    }
}

public class program18_1 {

    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }

}
