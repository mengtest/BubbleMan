/**
 * 玩家
 */

#ifndef __T4__BPlayer__
#define __T4__BPlayer__

#include <stdio.h>
#include "cocos2d.h"
#include "const.hpp"
#include "BIdGen.hpp"


/**
 * 玩家三种状态
 */
// enum {
//     player_sts_free,
//     player_sts_stuck,
//     player_sts_die
// };


enum {
    animation_free = 0,
    animation_left = 1,
    animation_right = 2,
    animation_back = 3,
    animation_front = 4,
    animation_stuck = 5,
    animation_die = 6,
    animation_max
};


class BPlayer: public cocos2d::Node, public BIdentity
{
public:
    BPlayer();
    BPlayer(int id);

    /**
     * 设置玩家的方向.
     */
    // void SetAnimation(int direction);
    // void SetDirection(int direction);

    /**
     * 设置玩家状态
     */
    void SetStatus(int status);

    /**
     * 返回玩家当前状态
     */
    int GetStatus();


    /**
     * 设置玩家的位置
     */
    void setPosition(const cocos2d::Vec2& position);


    /**
     * 获取玩家当前的id
     */
    int GetID(){return _id;}

private:
    void animationInit(int animation);

    /**
     * 玩家状态
     */
    int _status;
    //int _currentStatus;
    cocostudio::timeline::ActionTimeline* _animationActions[animation_max];
    cocos2d::Node * _animationNodes[animation_max];
};

#endif /* defined(__T4__BPlayer__) */
