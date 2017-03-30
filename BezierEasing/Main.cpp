#include "BezierEasing.h"
#include <iostream>

int main()
{

	BezierEasing bezier_test({ 1.0f,0.0f }, { 0.0f,1.0f });

	for (float t = 0.0f; t < 1.0f; t += 0.0017f)
	{
		std::cout << "t: " << t << " progress: " << bezier_test.GetEasingProgress(t) << "\n";
	}


	getchar();

	return 0;
}