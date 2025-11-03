class Logic {
    void displayGrade(int iMarks) {
        if (iMarks <= 100 && iMarks >= 75) {
            System.out.println("First Class");
        } else if (iMarks < 75 && iMarks >= 60) {
            System.out.println("Second Class");
        } else if (iMarks < 60 && iMarks >= 35) {
            System.out.println("You are Pass");

        } else {
            System.out.println("You are Fail");
        }
    }
}

public class program19_2 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }

}
