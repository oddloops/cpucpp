#pragma once
#ifndef CPU
#define CPU

#include "Instruction.h"

class Cpu
{
public:
	CPU();
	void execute(const std::vector<Instruction>& program);

private:
	uint16_t pc; // Program Counter
	uint16_t registers[8]; // General-Purpose Registers
};

#endif // !CPU
