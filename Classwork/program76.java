
import java.io.*;

class program75 {

    // not a good programmng we should use try catch block not throws..
    public static void main(String args[]) throws IOException
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