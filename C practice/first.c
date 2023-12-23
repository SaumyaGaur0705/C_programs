#include <stdio.h>
int main(){
    int n;
    printf("Enter the basic salary");
    scanf("%d",&n);
    float grosssalary=1.6*n;
    printf("The gross salary is %f ",grosssalary);
    return 0;
}