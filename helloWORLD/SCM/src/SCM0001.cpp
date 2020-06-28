/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "SCMext.h" /* Common files for all generated c-files */
#include "SCMxvar.h"  /* Var-images */

void P0 (void) /* �������: Init */
{
	switch (Check_State(0)) {

		case 0:    /*  P0S0() - ���������: Start */
  
			Set_Start(1); 
			
			Set_Stop(0);
			break;
		default:
			break;
	}
}

void P1 (void) /* �������: ReceiveVerifierOutputMsg */
{
	switch (Check_State(1)) {

		case 0:    /*  P1S0() - ���������: Start */

			if(GetNextMsgFromVM())
			{
				SendMsgToVerificationModuleCode(C_4);
			}
			
			break;
		default:
			break;
	}
}
