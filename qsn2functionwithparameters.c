#include<stdio.h>
#define _USE_MATH_DEFINES

#include<math.h>
 
 float circleArea(float radius){
    return M_PI * radius * radius;
 }
  
  int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    float area = circleArea(radius);
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
    
    return 0;
  }