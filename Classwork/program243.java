
import java.util.*;


class program242
{
    public static void main(String[] args) {
        
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Your name : ");

       

        String str = sobj.nextLine();
        System.out.println("Strin = "+str);

        System.out.println("Length of string : "+str.length());

        for(iCnt = 0; iCnt < str.length();iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
        
    
    }
}