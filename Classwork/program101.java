

import java.util.*;

class program101
{
    public static void main(String A[]) 
    {

        Scanner sobj = new Scanner(System.in);

        int iSize = 0, i = 0, iRet = 0;
    
        System.out.println("Enter the Size of Array : ");
        iSize = sobj.nextInt();


        int Arr[] = new int[iSize];

        System.out.println("Enter Elements : ");

        
        for(i = 0;i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayX aobj = new  ArrayX();
        aobj.Display(Arr);


        iRet = aobj.CountEven(Arr);
        System.out.println("Even numbers are : "+iRet);

        //Importatnt

        aobj = null;
        Arr = null;
        sobj = null;

        System.gc();
        
    }
}

class ArrayX
{
    public void Display(int Brr[])
    {
        int i = 0;

        System.out.println("Elements of array are : ");
        for(i = 0; i < Brr.length; i++)
        {
            System.err.print(Brr[i]+"  |  ");
        }
        System.out.println("\n");
    }

    public int CountEven(int Brr[])
    {
        int i = 0;
        int iEvenCnt = 0;

        for(i = 0; i<Brr.length; i++)
        {
            if(Brr[i] % 2 == 0)
            {
                iEvenCnt++;
            }
        }

        return iEvenCnt;
    }
}