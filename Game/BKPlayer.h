/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_PLAYER_MANAGER_H__
#define __BK_PLAYER_MANAGER_H__

#include "2d\\CCNode.h"


class CBKPlayer : public cocos2d::Node
{
public:
	static CBKPlayer *create();

protected:
    CBKPlayer(void);
    virtual ~CBKPlayer(void);

	bool init();

protected:
    

protected:
};


#endif // __BK_PLAYER_MANAGER_H__
