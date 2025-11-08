
// Chechked Exception

import java.io.*;

class program74
{
    public static void main(String args[])
    {
        int iNo = 0;
        int iCnt = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("enter number : ");
        iNo = Integer.parseInt(bobj.readLine());

        
        for(iCnt = 1;iCnt <= iNo/2 ; iCnt++)
        {
            if((iNo%iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}