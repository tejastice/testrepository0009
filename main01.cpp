#include <iostream>

void main()
{
	double x;
	double y;

	x = 5.0;//‰Šú’l

	double y1;
	double y2;
	double x1;
	double x2;
	double diff_x;
	double error = 0.00001;
	double delta = 0.00001;

	double next_x;

	x1 = x;

	while (1) {

		x2 = x1 + delta;

		//‚±‚±‚ªy=x^2-5
		y1 = x1*x1 - 5.0;
		y2 = x2*x2 - 5.0;

		diff_x = (y2 - y1) / (x2 - x1);
		next_x = x1 - y1 / diff_x;

		if (fabs(y1 - 0.0) < error) {
			break;
		}
		x1 = next_x;
	}

	x = x1;
	y = y1;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

}