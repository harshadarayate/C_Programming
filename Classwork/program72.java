class program72
{
    public static void main(String args[])
    {
        int iNo = 12;

        int iCnt = 0;

        for(iCnt = 1;iCnt <= iNo/2 ; iCnt++)
        {
            if((iNo%iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}