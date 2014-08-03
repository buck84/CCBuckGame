/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_LAYER_LOGIN_H__
#define __BK_LAYER_LOGIN_H__

#include "BKLayerBase.h"

class CBKPlayer;


/**
@brief ��Ϸ�������Ժ������Ҫ���Գ���һ�����ֳ����Ļ���



*/


class CBKLayerLogin: public CBKLayerBase
{
public:
	static CBKLayerLogin *create();

protected:
    CBKLayerLogin(void);
    ~CBKLayerLogin(void);

	bool init();

protected:
	
	void testAnim();
	void testUI();
	void testScene();
    

protected:

	CBKPlayer*	m_pPlayer;

};


#endif // __BK_LAYER_LOGIN_H__
