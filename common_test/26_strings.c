// This C code was automatically generated by Aixt Project
// Device = x64
// Board = x64-based board
// Backend = pc

#include <stdbool.h>

#include "/home/aixt-project/ports/PC/api/builtin.c"


int main() {
	char var[80];
	char var2[80];
	char str[] = "constant";
	bool b1 = false;
	__string_assign(var, str);
	__string_append(var, " ");
	__string_append(var, str);
	__string_assign(var2, __string_add(var, str));
	b1 = __string_comp(var, var2);
	return 0;
}