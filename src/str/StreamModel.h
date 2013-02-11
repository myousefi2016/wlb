/*
 * StreamModel.h
 * Andreas B�lling, 2012
 * DESCRIPTION - TODO
 */

#ifndef STREAMMODEL_H_
#define STREAMMODEL_H_

#include <iostream>
#include "../lat/LatticeModel.h"

using namespace std;

class StreamModel {
public:
	StreamModel();
	virtual ~StreamModel();
	virtual void stream() = 0;
	virtual void init() = 0;
	void setF(double ****f);
	void setLatticeModel(LatticeModel *lm){this->lm = lm;};

	//deprecated
    void registerN(struct LatticeModel::dimension &n);
protected:
    double ****f;
    LatticeModel *lm;

    //deprecated
    struct LatticeModel::dimension n;
};

#endif /* STREAMMODEL_H_ */
