/*The code calculates perimeter and area of the rectangle */

#include <stdio.h>

	int main () {

	float length1;
	float length2;
	float area;
	float perimeter;

	printf("Please enter the first length:");
	scanf("%f" , &length1);
	printf("Please enter the second length:");
	scanf("%f" , &length2);

	area = length1*length2;
	perimeter= 2*(length1+length2);

	printf("The area of rectangle is %.2f\n" ,area);
	printf("The perimeter of rectangle is %.2f" ,perimeter);
	
	
	return 0;
}
