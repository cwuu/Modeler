#ifndef IK_H
#define IK_H
#include <vector>
#include <random>
#include "modelerglobals.h"
#include "modelerapp.h"
class ik
{
	public: 
		static void optimize();
	private:
		ik() {};
		double cost_function();
		double duo_steps; 
		double 
		// the chain rule 

};

#endif