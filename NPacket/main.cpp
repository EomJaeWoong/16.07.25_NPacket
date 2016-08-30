#include <Windows.h>
#include <stdio.h>
#include "NPacket.h"

struct st
{
	int x;
	int y;
};

void main()
{
	CNPacket::_ValueSizeCheck();

	st *in = new st, *out = new st;
	in->x = 2;
	in->y = 3;


	CNPacket cPacket;

	cPacket.Put((char *)in, sizeof(*in));

	cPacket.Get((char *)out, sizeof(*out));

	printf("%d %d\n", out->x, out->y);
}