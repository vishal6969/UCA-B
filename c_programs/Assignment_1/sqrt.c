#include <stdio.h>
#include <math.h>
int main()
{
    double number;
    int precision;
    
    printf ("Enter number: ");
    scanf ("%lf", &number);
    
    printf ("Enter precision: ");
    scanf ("%d", &precision);
    
    double left = 1;
    double right = number;
    double mid;
    
    while (left < right)
    {
        mid = (double) (left + (right - left)/2);

        if ((mid * mid) < number)
        {
            left = mid;
        }
        
        else if  (floor(mid * mid * pow(10, precision)) / pow(10, precision) == number)
        {
            double answer = floor(mid * pow(10, precision)) / pow(10, precision);
            
            printf ("%.*f \n", precision,answer);
            
            break;
        }
        
        else
        {
            right = mid;
        }
    }
    
    return 0;
}

