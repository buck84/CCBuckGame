/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_LAYER_BASE_H__
#define __BK_LAYER_BASE_H__

#include "2d\\CCLayer.h"

class CBKSceneManager;
class CBKUIManager;

/**
@brief ��Ϸ�������Ժ������Ҫ���Գ���һ�����ֳ����Ļ���



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
