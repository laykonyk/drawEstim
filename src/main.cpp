#include <iostream>
#include "estimator/Estimator.cpp"
#include <memory>

using namespace drawestim;

int main(){
	std::shared_ptr<Estimator> estim( new Estimator());
	return 0;
}
