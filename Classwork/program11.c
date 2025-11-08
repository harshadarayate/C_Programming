/*   Algorithm
Start
    Accept first input as no1.
    Accept Sec input as no2.
    if i/p is neg then convert it into neg
    Perform addition of no1 and no2.
    Display the addition on screen.
Stop
*/

/////////////////////////////////////////////////////////////////////////////////////
//  
// Required header files
//
/////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////////////
// Function name : AdditionTwoNumbers
// Description   : It is used to perform addition of two numbers
// Input         : Float, Float
// Output        : Float
// Author        : Harshada Gopal Rayate
// Date          : 09/10/2025
/////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                 //first input
                            float fNo2                  //second input
                        )
{
    if(fNo1 < 0.0f)                                     //updator
    {
        fNo1 = -fNo1;                                   // - - = +
    }

    if(fNo2 < 0.0f)                                     //Updator
    {
        fNo2 = -fNo2;                                   // - - = +
    }

    float fSum = 0.0f;
    fSum = fNo1+fNo2;                                   //buisness logic
    return fSum;
} //end of AdditionTwoNumbers function

/////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{
  
    float fValue1 = 0.0f,fValue2 = 0.0f;                // To accept user input
    float fRet = 0.0f;                                  //to store the result

    printf("Enter first number : \n");          
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);         //method call

    printf("Addition : %f\n",fRet);

    return 0;
}   //End of main function
 
/////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handaled by the application
//
//  Input1 : 10.5       Input2 : 3.2        Output : 13.7
//  Input1 : -10.5      Input2 : 3.2        Output : 13.7
//  Input1 : 10.5       Input2 : -3.2       Output : 13.7
//  Input1 : -10.5      Input2 : -3.2       Output : 13.7
//  Input1 : 10.5       Input2 : 0.0        Output : 10.5
//
/////////////////////////////////////////////////////////////////
