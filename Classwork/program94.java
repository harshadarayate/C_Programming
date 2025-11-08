
class program94
{
    public static void main(String A[]) 
    {
        int Arr[] = {10,20,30,40};
        
        ArrayX aobj = new ArrayX();

        aobj.Display(Arr);      // in java we can olny pass arrayname in c /cpp we need to pass length becuase lingth function is not there

    }
}

class ArrayX
{
    void Display(int Brr[])
    {
        int iCnt  = 0;

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }
    }
}