class Logic 
{
    void checkDivisible(int iNo) 
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println("The number is divisible by 5 and 11");
        }
        else
        {
            System.out.println("The number is not divisible by 5 and 11");
        }
    }
}

public class program19_3 
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}
