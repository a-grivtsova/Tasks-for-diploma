
	
	#define Idiling /* C_0 - Idiling */ 0
	#define RunNextTest /* C_1 - RunNextTest */ 1
 
	
	enum EN0 {		
		SCM2VP_MESSAGE_TURN_ON /* SCM2VP_MESSAGE_TURN_ON */,
		SCM2VP_MESSAGE_TURN_OFF /* SCM2VP_MESSAGE_TURN_OFF */
	
	};
 
	
	
	enum EN1 {
		SCM2VM_TEST_NORMAL_TURN_ON /* SCM2VM_TEST_NORMAL_TURN_ON */,
		SCM2VM_TEST_NORMAL_TURN_OFF /* SCM2VM_TEST_NORMAL_TURN_OFF */, 
		SCM2VM_FINISH_VERIFICATION /* SCM2VM_FINISH_VERIFICATION */
	
	};

	
	enum EN2 {
		VM2SCM_START_VERIFICATION /* VM2SCM_START_VERIFICATION */,
		VM2SCM_NEXT_TEST /* VM2SCM_NEXT_TEST */
	
	};