#include<stdio.h>
int main(){
    float cost, salvage, life, yearly_depreciation;
    printf("enter cost, salvage value and service life (years):");
    scanf("%f %f %f",&cost, &salvage, &life);
    
    
          yearly_depreciation = (cost - salvage) / life;
    printf("yearly depreciation is: %.2f", yearly_depreciation);
    
    
    
    return 0;
}