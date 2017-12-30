#include <agb_lib.h>
#include "cameras.h"
#include "bonnie.h"
#include "chica.h"
#include "foxy.h"
#include "freddy."
#include "hallucinations.h"
#include "office.h"
#include "sounds.h"
#include "yellowbear.h"

int main()
{
	Initialize();
	setbg2((void*)warningBitmap, (void*)warningPalette);
	FadeIn(2);
	Sleep(255);
	FadeOut(2);
	return 0;
}