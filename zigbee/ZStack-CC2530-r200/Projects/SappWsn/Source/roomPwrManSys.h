#ifndef _SAPP_SAMPLE_H_
#define _SAPP_SAMPLE_H_
#include "SAPP_FrameWork.h"
#ifdef __cplusplus
extern "C"
{
#endif

enum {
    DevIRPers,          //������⴫����
    DevIllum,           //���նȴ�����
    DevExecuter,        //ִ����
    DevTemp,            //�¶ȴ�����
    DevHumm,            //ʪ�ȴ�����
    Devmax,             //�豸����
    DevPwrmanSys
};

#if !defined(ZDO_COORDINATOR)

//#define ILLUM_NODE    //���սڵ�
//#define IRPERS_NODE   //�������ڵ�
#define EXECUTER_NODE   //ִ�����ڵ�
//#define TEMP_NODE     //�¶Ƚڵ�
//#define HUMM_NODE     //ʪ�Ƚڵ�

#endif

#ifdef __cplusplus
}
#endif
#endif//_SAPP_SAMPLE_H_