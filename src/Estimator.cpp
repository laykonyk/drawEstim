/*
 * Estimator.cpp
 *
 *  Created on: 7 Nov 2015
 *      Author: kryczenk
 */

#include "Estimator.h"
#include <memory>

namespace drawestim {

Estimator::Estimator() {
	fann_create_standard(1);


}

Estimator::~Estimator() {
	// TODO Auto-generated destructor stub
}

} /* namespace drawestim */
