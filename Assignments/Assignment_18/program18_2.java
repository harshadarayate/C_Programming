
public class program18_2 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}

class Logic {
    void printEvenNumbers(int iNo) {
        int iCnt = 0;
        for(iCnt = 0; iCnt <= iNo; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
        System.out.println("\n");
    }
}
