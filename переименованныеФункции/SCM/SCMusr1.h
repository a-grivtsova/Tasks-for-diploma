#ifndef _SCMusr1_h
#define _SCMusr1_h 1

int GetOutMsgNumber_Verifier(void);

/************************/
/*Verifier Input msg queue*/
/************************/
//������� ��� GetNextMsgFromVerifier(�����);
int GetNextMsgFromVerifier(void);
//������� ���  GetMsgCodeFromVerifier        (�����);  /*������ �� ������ ���� ������� */
int GetMsgCodeFromVerifier();
//������� ���� GetFloatParamFromVerifier     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromVerifier();
//������� ���� GetLongParamFromVerifier      (�����);
long GetLongParamFromVerifier();

/************************/
/*  Output VP msg queue*/
/************************/
//������� ���  SendMessageToPlant       (���);
int SendMsgToPlant(int code);
//������� ���  SendMsgFloatParamToPlant (���, ����);
int SendMsgFloatParamToPlant(int code, float param);
/* ������� ���  SendMsgShortParamToPlant (���, ����); */
int SendMsgShortParamToPlant(int code, short param);
/* ������� ���  SendMsgIntParamToPlant   (���, ���); */
int SendMsgIntParamToPlant(int code, int param);
//������� ���  SendMsgLongParamToPlant  (���, ����);
int SendMsgLongParamToPlant(int code, long param);


/********/
/*CA  Output msg queue*/
/********/

//������� ���  SendMsgToAlgorithm       (���);
int SendMsgToAlgorithm(int code);
//������� ���  SendMsgFloatParamToAlgorithm (���, ����);
int SendMsgFloatParamToAlgorithm(int code, float param);
/* ������� ���  SendMsgShortParamToAlgorithm (���, ����); */
int SendMsgShortParamToAlgorithm(int code, short param);
/* ������� ���  SendMsgIntParamToAlgorithm   (���, ���); */
int SendMsgIntParamToAlgorithm(int code, int param);
//������� ���  SendMsgLongParamToAlgorithm  (���, ����);
int SendMsgLongParamToAlgorithm(int code, long param);



/********/
/*Verifier  Output msg queue*/
/********/

//������� ���  SendMsgToVerifierCode       (���);
int SendMsgToVerifierCode(int code);
//������� ���  SendMsgFloatParamToVerifier (���, ����);
int SendMsgFloatParamToVerifier(int code, float param);
/* ������� ���  SendMsgShortParamToVerifier (���, ����); */
int SendMsgShortParamToVerifier(int code, short param);
/* ������� ���  SendMsgIntParamToVerifier   (���, ���); */
int SendMsgIntParamToVerifier(int code, int param);
//������� ���  SendMsgLongParamToVerifier  (���, ����);
int SendMsgLongParamToVerifier(int code, long param);


#endif