/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_LAYER_GAME_H__
#define __BK_LAYER_GAME_H__

#include "BKLayerBase.h"

class CBKPlayer;


/**
@brief 游戏场景，以后根据需要可以抽象一个各种场景的基类



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
