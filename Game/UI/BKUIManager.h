/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_UI_MANAGER_H__
#define __BK_UI_MANAGER_H__

#include "base/CCVector.h"

namespace cocos2d
{
	class Node;
	namespace ui
	{
		class Widget;
	}
}

class CBKUIManager : public cocos2d::Ref
{
public:
    CBKUIManager(void);
    ~CBKUIManager(void);
   
	bool init(cocos2d::Node *parent); 
protected:
    

protected:
	typedef cocos2d::Vector<cocos2d::ui::Widget*> WidgetVector;
	WidgetVector m_vecUIs;
};


#endif // __BK_UI_MANAGER_H__
