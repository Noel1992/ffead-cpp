/*
	Copyright 2010, Sumeet Chhetri 
  
    Licensed under the Apache License, Version 2.0 (the "License"); 
    you may not use this file except in compliance with the License. 
    You may obtain a copy of the License at 
  
        http://www.apache.org/licenses/LICENSE-2.0 
  
    Unless required by applicable law or agreed to in writing, software 
    distributed under the License is distributed on an "AS IS" BASIS, 
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
    See the License for the specific language governing permissions and 
    limitations under the License.  
*/
/*
 * ApplicationUtil.h
 *
 *  Created on: Dec 30, 2009
 *      Author: sumeet
 */

#ifndef APPLICATIONUTIL_H_
#define APPLICATIONUTIL_H_
#include "XmlParser.h"
#include "AfcUtil.h"
#include "iostream"
typedef vector<Element> ElementList;
class ApplicationUtil {
public:
	ApplicationUtil();
	virtual ~ApplicationUtil();
	string buildAllApplications(vector<string>,vector<string>,map<string,string> &);
};

#endif /* APPLICATIONUTIL_H_ */