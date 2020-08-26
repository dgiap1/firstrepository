/*
 *	@file h35.h
 *  @author Your name goes here
 *  @version  what day and meeting time
 */
#ifndef H35_H_
#define H35_H_

#include <string>

/////// Declare all of your classes here ////////////////
/////// In this order: Worker, SalariedWorker, HourlyWorker
class Worker
{
	std::string name;
	double rate;
public:
	Worker(const std::string& name, double rate);
	virtual ~Worker() = default;
	. . .
};


#endif
