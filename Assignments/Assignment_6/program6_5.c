#include <stdio.h>


float Percentage(int iNo1, int iNo2)
{
    float fResult = 0.0f;

    if (iNo1 == 0)
    {
        return -1;
    }

    fResult = ((float)iNo2 / iNo1) * 100;

    return fResult;
}
int main()
{
    int iTotalMarks = 0, iObtainedMarks = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d", &iTotalMarks);

    printf("Please enter obtained marks : ");
    scanf("%d", &iObtainedMarks);

    fRet = Percentage(iTotalMarks, iObtainedMarks);

    printf("Percentage is %0.2f%%\n", fRet);
    return 0;
}


////////////////////////////////////////////////////
//
// Time Complexity : O(1)
//
////////////////////////////////////////////////////
