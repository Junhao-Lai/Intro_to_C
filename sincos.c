#include <math.h>
#include <stdio.h>

int main()
{
	float gap,x,y;
	int i;

	for(i = 0; i <= 10; i++)
	{
 		gap = i/10.0;
		x=(sin(gap));
		y=(cos(gap));
 		printf("sin of (%0.2f)=%0.2f\t cos of (%0.2f)=%0.2f\n",gap,x,gap,y);
	}	

return 0;
}

  
