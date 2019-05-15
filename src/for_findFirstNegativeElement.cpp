#include <math.h>
#include "func.h"

namespace for_loop
{
	int findFirstNegativeElement(double eps)
	{
		int i;

		for(i = 0; ; i++)
		{
			if(fabs(a(i)) <= eps) return i;
		}
		return 1337;
	}
}
