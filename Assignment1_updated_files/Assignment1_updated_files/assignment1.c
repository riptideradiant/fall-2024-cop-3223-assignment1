#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14159

double askForUserInput()
{

double pointValue = 0;
scanf("%lf", &pointValue);

return pointValue;
}

double distanceCalculator()
{
   
printf("Enter the x value point 1: \n");
double point1XValue = askForUserInput();

printf("Enter the y value of point 1: \n");
double point1YValue = askForUserInput();

printf("Enter the x value point 2: \n");
double point2XValue = askForUserInput();

printf("Enter the y value point 2: \n");
double point2YValue = askForUserInput();

double distanceX = point1XValue - point2XValue;
double distanceY = point1YValue - point2YValue;
double distance = sqrt(pow(distanceX, 2) + pow(distanceY,2));

printf("Point #1 entered: x1 = %lf; y1 = %lf \n", point1XValue, point1YValue);
printf("Point #2 entered: x1 = %lf; y1 = %lf \n", point2XValue, point2YValue);

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
double difficulty1 = 3;

printf("The perimeter of the city encompassed by your request is %lf \n", perimeter);
return difficulty1;
}

double calculateArea()
{

double diameter = distanceCalculator();
double Area = 0.25*pi*pow(diameter, 2);
double difficulty2 = 2;

printf("The area of the city encompassed by your request is %lf \n", Area);
return difficulty2;
}

double calculateWidth()
{

printf("Enter the x value point 1: \n");
double point1XValue = askForUserInput();

printf("Enter the x value point 2: \n");
double point2XValue = askForUserInput();

double width = abs(point1XValue - point2XValue);
double difficulty3 = 1;

printf("The width of the city encompassed by your request is %lf \n", width);

return difficulty3;
}

double calculateHeight()
{

printf("Enter the y value point 1: \n");
double point1YValue = askForUserInput();

printf("Enter the y value point 2: \n");
double point2YValue = askForUserInput();

double height = abs(point1YValue - point2YValue);
double difficulty4 = 1;

printf("The height of the city encompassed by your request is %lf \n", height);
return difficulty4;
}
int main(int argc, char **argv)
{

calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();

return 0;
}