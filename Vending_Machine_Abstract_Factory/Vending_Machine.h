#pragma once
#include <string>
#include <iostream>
#include <thread>
#include <chrono>
class Abstract_Vending_Machine
{
private:

public:
	//Virtual functions
	virtual void brewing(std::string, int, int)  const = 0;
	virtual int sugar_adding() const = 0;
};