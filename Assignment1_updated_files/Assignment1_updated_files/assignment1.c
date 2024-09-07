#include <stdio.h>
#include <math.h>
#define pi 3.14159

double askForUserInput()
{

double pointvalue = 0;
scanf("%lf", &pointvalue);

return pointvalue;
}

double distanceCalculator()
{
   
printf("Enter the x value point 1: \n");
double point1Xvalue = askForUserInput();

printf("Enter the y value of point 1: \n");
double point1Yvalue = askForUserInput();

printf("Enter the x value point 2: \n");
double point2Xvalue = askForUserInput();

printf("Enter the y value point 2: \n");
double point2Yvalue = askForUserInput();

double distanceX = point1Xvalue - point2Xvalue;
double distanceY = point1Yvalue - point2Yvalue;
double distance = sqrt(pow(distanceX, 2) + pow(distanceY,2));
printf("Point #1 entered: x1 = %lf; y1 = %lf \n", point1Xvalue, point1Yvalue);
printf("Point #2 entered: x1 = %lf; y1 = %lf \n", point2Xvalue, point2Yvalue);

return distance;
}

double calculateDistance()
{

double distance = distanceCalculator();

printf("The distance between the two points is %lf \n", distance);

return distance;
}

double calculatePerimeter()
{

double diameter = distanceCalculator();
double perimeter = pi*diameter;
double difficulty1 = 5;

printf("The perimeter of the city encompassed by your request is %lf \n", perimeter);
return difficulty1;
}

int main(int argc, char **argv)
{

calculateDistance();
calculatePerimeter();

return 0;
}