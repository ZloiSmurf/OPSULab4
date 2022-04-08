
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed = 500;
	//EVIRD.ENABLE=1;
}

void _CYCLIC ProgramCyclic(void)
{
	DRIVE(&EVIRD);
	if(OnButton){
		EVIRD.ENABLE=1;
	}
	else if(!OnButton){
		EVIRD.ENABLE=0;
	}
}

void _EXIT ProgramExit(void)
{

}

