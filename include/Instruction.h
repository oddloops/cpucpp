pragma once
#ifndef INSTRUCTION
#define INSRUCTION

#include <vector>

enum Opcode
{
	// Arthimetic
	ADD,
	SUB,

	// Control Flow
	JUMP, // Both conditional and unconditional jump/branch

	// Data Movement
	LOAD,
	STORE,
	MOVE,

	// System and Control Operations
	HALT,
	INTERRUPT

};

struct Instruction
{
	Opcode opcode;
	uint16_t operand1;
	uint16_t operand2;
};

#endif // !INSTRUCTION
