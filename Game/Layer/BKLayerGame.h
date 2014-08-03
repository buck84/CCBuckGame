/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_LAYER_GAME_H__
#define __BK_LAYER_GAME_H__

#include "BKLayerBase.h"

class CBKPlayer;


/**
@brief ��Ϸ�������Ժ������Ҫ���Գ���һ�����ֳ����Ļ���



*/


class CBKLayerGame: public CBKLayerBase
{
public:
	static CBKLayerGame *create();

protected:
    CBKLayerGame(void);
    ~CBKLayerGame(void);

	bool init();

protected:
	
	void testAnim();
	void testUI();
	void testScene();
    

protected:

	CBKPlayer*	m_pPlayer;

};


#endif // __BK_LAYER_GAME_H__
