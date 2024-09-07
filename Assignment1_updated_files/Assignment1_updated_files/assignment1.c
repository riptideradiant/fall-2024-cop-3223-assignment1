#include <stdio.h>
#include <math.h>

double calculateDistance(double x1val, double x2val, double y1val, double y2val)
{

double distanceX = x1val - x2val;
double distanceY = y1val - y2val;
double distance = sqrt(pow(distanceX, 2) + pow(distanceY,2));

return distance;
}

int main(int argc, char **argv)
{

double point1Xvalue = 0;
double point1Yvalue = 0;
double point2Xvalue = 0;
double point2Yvalue = 0;

printf("Enter the x then the y value of point 1: \n");
scanf("%lf", &point1Xvalue);
scanf("%lf", &point1Yvalue);

printf("Enter the x then the y value of point 2: \n");
scanf("%lf", &point2Xvalue);
scanf("%lf", &point2Yvalue);

double newDistance = calculateDistance(point1Xvalue, point2Xvalue, point1Yvalue, point2Yvalue);
printf("The distance between the points is: %lf \n", newDistance);

return 0;
}