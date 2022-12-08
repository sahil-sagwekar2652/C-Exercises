/* Exercise 1-3. Modify the temperature conversion program to print a heading above the table.

Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

/* print Fahrenheit-Celsius table 
for f = 0, 20, ..., 300 */

main () 
{
/*
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; // lower limit of temperature table 
    upper = 300; // upper limit
    step = 20; // step size 
    fahr = lower;

    printf("Fahrenheit-Celsius table\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
*/

    int fahr;

    for (fahr=0; fahr <= 300; fahr = fahr + 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
 
}    
