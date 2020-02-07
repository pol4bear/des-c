#include <stdio.h>
#include "DES.h"

int main()
{
	UBYTE p[8] = {0x0, }, k[7] = {0x0, }, c[8] = {0x0, };

	DES_enc(p, k, c);

	return 0;
}