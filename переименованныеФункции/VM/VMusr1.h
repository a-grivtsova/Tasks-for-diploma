#ifndef _VMusr1_h
#define _VMusr1_h 1
/* AlgorithmUSR1.H file. Place your code here. */
/* It will be included at the top of all include-files in every generated file. */

int GetOutGUIMsgNumber_GUI(void);
int GetOutDispatcherMsgNumber_GUI(void);


/************************/
/*Algorithm Input msg queue*/ 
/************************/

//������� ��� GetNextMsgFromAlgorithm(�����);
int GetNextMsgFromAlgorithm(void);

//������� ���  GetMsgCodeFromAlgorithm        (�����);  /*������ �� ������ ���� ������� */
int GetMsgCodeFromAlgorithm();

//������� ���� GetFloatParamFromAlgorithm     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromAlgorithm();

//������� ���� GetLongParamFromAlgorithm      (�����);
long GetLongParamFromAlgorithm();


/************************/
/*Dispatcher Input msg queue*/
/************************/

//������� ��� GetNextMsgFromDispatcher(�����);
int GetNextMsgFromDispatcher(void);

//������� ���  GetMsgCodeFromDispatcher        (�����);  /*������ �� ������ ���� ������� */
int GetMsgCodeFromDispatcher();

//������� ���� GetFloatParamFromDispatcher     (�����);  /*������ �� ������ ��������� ������� */
float GetFloatParamFromDispatcher();

//������� ���� GetLongParamFromDispatcher      (�����);
long GetLongParamFromDispatcher();



/************************/
/*  Output GUI msg queue*/
/************************/

//������� ���  SendMsgGUICode       (���);
int SendMsgGUICode(int code);

//������� ���  SendMsgFloatParamGUI (���, ����);
int SendMsgFloatParamGUI(int code, float param);

/* ������� ���  SendMsgShortParamPIV (���, ����); */
int SendMsgShortParamGUI(int code, short param);

/* ������� ���  SendMsgIntParamPIV   (���, ���); */
int SendMsgIntParamGUI(int code, int param);

//������� ���  SendMsgLongParamGUI  (���, ����);
int SendMsgLongParamGUI(int code, long param);

/********/
/*Dispatcher  Output msg queue*/
/********/
/*������� ���  SendMsgToDispatcher(���); */ 
int SendMsgToDispatcher(int code);

//������� ���  SendMsgFloatToDispatcher (���, ����);
int SendMsgFloatToDispatcher(int code, float param);

/* ������� ���  SendMsgShortToDispatcher(���, ����); */
int SendMsgShortToDispatcher(int code, short param);

/* ������� ���  SendMsgIntToDispatcher  (���, ���); */
int SendMsgIntToDispatcher(int code, int param);

//������� ���  SendMsgLongParamGUI  (���, ����);
int SendMsgLongToDispatcher(int code, long param);


float PortsToFloat(int zero_bit, int first, int second, int third);

float ABS(float);
#endif