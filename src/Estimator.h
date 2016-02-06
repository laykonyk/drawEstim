/*
 * Estimator.h
 *
 *  Created on: 7 Nov 2015
 *      Author: kryczenk
 */

#ifndef ESTIMATOR_H_
#define ESTIMATOR_H_
#include <fann.h>
namespace drawestim {

class Estimator {
public:
	Estimator();
	virtual ~Estimator();
};

} /* namespace drawestim */

#endif /* ESTIMATOR_H_ */
