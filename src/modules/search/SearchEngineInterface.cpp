/*
 * SearchEngineInterface.cpp
 *
 *  Created on: 03-Nov-2018
 *      Author: sumeet
 */

#include "SearchEngineInterface.h"

SearchEngineInterface::SearchEngineInterface() {
	reflector = NULL;
	dlib = NULL;
	pool = NULL;
}

SearchEngineInterface::~SearchEngineInterface() {
	delete reflector;
}
