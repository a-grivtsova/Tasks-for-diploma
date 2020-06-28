#include "SCMusr1.h"
#include "msg_queue.h"
QueueMsg last_msg_from_verifier;

MsgQueue InputQueueFromVerifier;

MsgQueue Dispatcher2Algorithm_OutputQueue;
MsgQueue Dispatcher2Plant_OutputQueue;
MsgQueue Dispatcher2Verifier_OutputQueue;

int GetOutMsgNumber_Verifier(void)
{
	return GetLenMsgQueue(&InputQueueFromVerifier);
}

/************************/
/*Verifier Input msg queue*/
/************************/
//������� ��� GetNextMsgFromVerifier(�����);
int GetNextMsgFromVerifier(void)
{
	return GetHeadMsgQueue(&InputQueueFromVerifier, &last_msg_from_verifier);
}

//������� ���  GetMsgCodeFromVerifier        (�����);  /*������ �� ������ ���� ������� */
int GetMsgCodeFromVerifier()
{
	return last_msg_from_verifier.code;
}

//������� ���� GetFloatParamFromVerifier     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromVerifier()
{
	return last_msg_from_verifier.param.pr_float;

}
//������� ���� GetLongParamFromVerifier      (�����);
long GetLongParamFromVerifier()
{
	return last_msg_from_verifier.param.pr_long;
}

/************************/
/*  Output Plant msg queue*/
/************************/
//������� ���  SendMessageToPlantCode       (���);
int SendMsgToPlantCode(int code)
{
	return PutTailMsgQueue(&Dispatcher2Plant_OutputQueue, code);
}

//������� ���  SendMsgFloatParamToPlant (���, ����);
int SendMsgFloatParamToPlant(int code, float param)
{
	return PutTailMsgQueueF(&Dispatcher2Plant_OutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamToPlant (���, ����); */
int SendMsgShortParamToPlant(int code, short param)
{
	return PutTailMsgQueueS(&Dispatcher2Plant_OutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamToPlant   (���, ���); */
int SendMsgIntParamToPlant(int code, int param)
{
	return PutTailMsgQueueI(&Dispatcher2Plant_OutputQueue, code, param);

}

//������� ���  SendMsgLongParamToPlant  (���, ����);
int SendMsgLongParamToPlant(int code, long param)
{
	return PutTailMsgQueueL(&Dispatcher2Plant_OutputQueue, code, param);
}



/********/
/*Algorithm  Output msg queue*/
/********/

//������� ���  SendMsgToAlgorithmCode       (���);
int SendMsgToAlgorithmCode(int code)
{
	return PutTailMsgQueue(&Dispatcher2Algorithm_OutputQueue, code);
}

//������� ���  SendMsgFloatParamToAlgorithm (���, ����);
int SendMsgFloatParamToAlgorithm(int code, float param)
{
	return PutTailMsgQueueF(&Dispatcher2Algorithm_OutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamToAlgorithm (���, ����); */
int SendMsgShortParamToAlgorithm(int code, short param)
{
	return PutTailMsgQueueS(&Dispatcher2Algorithm_OutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamToAlgorithm   (���, ���); */
int SendMsgIntParamToAlgorithm(int code, int param)
{
	return PutTailMsgQueueI(&Dispatcher2Algorithm_OutputQueue, code, param);

}

//������� ���  SendMsgLongParamToAlgorithm  (���, ����);
int SendMsgLongParamToAlgorithm(int code, long param)
{
	return PutTailMsgQueueL(&Dispatcher2Algorithm_OutputQueue, code, param);
}




/********/
/*Verifier  Output msg queue*/
/********/

//������� ���  SendMsgToVerifierCode       (���);
int SendMsgToVerifierCode(int code)
{
	return PutTailMsgQueue(&Dispatcher2Verifier_OutputQueue, code);
}

//������� ���  SendMsgFloatParamToVerifier (���, ����);
int SendMsgFloatParamToVerifier(int code, float param)
{
	return PutTailMsgQueueF(&Dispatcher2Verifier_OutputQueue, code, param);

}

/* ������� ���  SendMsgShortParamToVerifier (���, ����); */
int SendMsgShortParamToVerifier(int code, short param)
{
	return PutTailMsgQueueS(&Dispatcher2Verifier_OutputQueue, code, param);

}

/* ������� ���  SendMsgIntParamToVerifier   (���, ���); */
int SendMsgIntParamToVerifier(int code, int param)
{
	return PutTailMsgQueueI(&Dispatcher2Verifier_OutputQueue, code, param);

}

//������� ���  SendMsgLongParamToVerifier  (���, ����);
int SendMsgLongParamToVerifier(int code, long param)
{
	return PutTailMsgQueueL(&Dispatcher2Verifier_OutputQueue, code, param);
}







