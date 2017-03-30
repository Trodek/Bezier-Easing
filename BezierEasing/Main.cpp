#include "BezierEasing.h"
#include <iostream>

int main()
{

	BezierEasing bezier_test({ 0.81f,0.81f }, { 0.16f,0.16f });

	for (float t = 0.0f; t < 1.01f; t += 0.007f)
	{
		std::cout << "t: " << t << " progress: " << bezier_test.GetEasingProgress(t) << "\n";
	}

	getchar();

	return 0;
}