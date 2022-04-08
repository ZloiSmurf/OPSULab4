
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	i=0;
}

void _CYCLIC ProgramCyclic(void)
{
	if(Blink ==1){
		Leds[0]= !Leds[0];
		
		if(i%2){
			Leds[1]= !Leds[1];	
		}
		if(i%4){
			Leds[2]= !Leds[2];
		}
		if(i%8){
			Leds[3]= !Leds[3];
		}	
		i++;
	}
	else{
		Leds[0]= led_button[0];
		Leds[1]= led_button[1];
		Leds[2]= led_button[2];
		Leds[3]= led_button[3];
	
	}
}

void _EXIT ProgramExit(void)
{
    
}

