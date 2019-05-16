#include <iostream>
#include <math.h>
#include "func.h"

using namespace std;
using namespace do_while_loop;

int main()
{
	int k;
	double n;
	while(true)
	{
		printf("1) Task 1\n");
		printf("2) Task 2\n");
		printf("3) Task 3\n");
		printf("4) Task 4\n");
		printf("5) Task 5\n");
		printf("6) Exit\n");
		cin >> k;
		switch(k)
		{
			case 1:
				printf("Please input n:\n");
				cin >> k;
				cout << "Result: " << summ(k) << endl;
				break;
			case 2:
				printf("Please input eps:\n");

				cin >> n;
				cout << "Result: " << endl;
				cout << summ2(n) << endl;
				break;
			case 3:
				printf("Please input n, k:\n");

				cin >> n;
				cin >> k;
				print(n, k);
				break;
			case 4:
				printf("Please input eps:\n");

				cin >> n;
				cout << "Result: " << findFirstElement(n) << endl;
				break;
			case 5:
				printf("Please input eps:\n");

				cin >> n;
				cout << "Result: " << findFirstNegativeElement(n) << endl;
				break;
			case 6:
				return 1;
			default:
				break;
		}
	}

	return 0;
}

