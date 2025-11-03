#include "udf.h"
#include "math.h"
#include <stdio.h>
DEFINE_CG_MOTION(pp,dt,vel,omega,time,dtime)
{
vel[1]= -0.18*M_PI*sin(6* M_PI*time);
omega[2]=1.33*M_PI*M_PI*cos( 8* M_PI*time);

	
}
