/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_SCENE_MANAGER_H__
#define __BK_SCENE_MANAGER_H__

#include "base/CCVector.h"

namespace cocos2d {
class Scene;
}

/**
@brief    ������Ϸ�д�cocosstudio�����ĳ���������һ��scene����Դ����
�����½�������һ��scene��������Ϸ���԰ѵ�½����scenemanagerɾ��������Ϸscenes
��cocos2dx�е�Sceneû���κι�ϵ��cocos2dx��Sceneͨ��Ϊ�հף�ֻ����ΪLayer��Node������



*/

class CBKSceneManager
{
public:
	enum
	{
		//SCENE_LOGIN,
		SCENE_GAME,
		SCENE_SCORE,
		SCENE_NUM,
	};
    CBKSceneManager(void);
    ~CBKSceneManager(void);

	bool init();

public:
	void changeScene(int type);

	void addSceneToLayer(cocos2d::Node* parent, int index=-1);
	cocos2d::Node*	getSceneRunning() { m_vecScenes.at(m_iSceneIndexRunning); }
    
protected:
    

protected:
	static CBKSceneManager * sm_pSceneManager;
   
	typedef cocos2d::Vector<cocos2d::Node*> SceneVector;
	SceneVector m_vecScenes;
	int			m_iSceneIndexRunning;
};


#endif // __BK_SCENE_MANAGER_H__
