class Logic {
    void checkEvenOdd(int iNo) {
        if (iNo % 2 == 0) {
            System.out.println(iNo + " is Even Number!");
        } else {
            System.out.println(iNo + " is Odd Number!");

        }
    }
}

class program16_2 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}