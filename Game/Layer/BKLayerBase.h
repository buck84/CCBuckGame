/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_LAYER_BASE_H__
#define __BK_LAYER_BASE_H__

#include "2d\\CCLayer.h"

class CBKSceneManager;
class CBKUIManager;

/**
@brief 游戏场景，以后根据需要可以抽象一个各种场景的基类



*/


class CBKLayerBase: public cocos2d::Layer
{
public:
	static CBKLayerBase *create();

protected:
    CBKLayerBase(void);
    virtual ~CBKLayerBase(void);

	virtual bool init();

protected:
	
protected:
	
   CBKSceneManager* m_pSceneManager;
   CBKUIManager*	m_pUIManager;

};


#endif // __BK_LAYER_BASE_H__
