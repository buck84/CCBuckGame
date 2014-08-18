/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_GAME_MANAGER_H__
#define __BK_GAME_MANAGER_H__

#include "2d\\CCScene.h"

class CBKLayerBase;
class CBKLayerGame;

/**
@brief    The Game instance
��Ϸ�����߼�����Ҫ����ÿ����Ϸ�߼�֮���л������½���浽��Ϸ����
������Scene��Ϊcocos2dx��Director�����Scene::onExit����дonExit�Ա�
*/
class CBKGame : public cocos2d::Scene
{
	enum
	{
		LAYER_LOGIN,
		LAYER_GAME,
		LAYER_NUM,
	};
public:
    CBKGame(void);
    ~CBKGame(void);

	bool init();
	bool run();

	//virtual void onEnter();
	//virtual void onExit();

	static CBKGame* getInstance();
    
protected:
	//void enterLayer(int layer);
    

protected:
   static CBKGame * sm_pGame;


   CBKLayerGame*	m_pLayerGame;

   CBKLayerBase*	m_pLayerRunning;
};


#endif // __BK_GAME_MANAGER_H__
