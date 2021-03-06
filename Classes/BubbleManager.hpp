/**
 *  A test class. A more elaborate class description.
 */

#ifndef __T4__BubbleManager__
#define __T4__BubbleManager__

#include "BidGen.hpp"
#include "Bubble.hpp"
#include "cocos2d.h"

class Bubble;


/**
 * 管理和生成场景中出现的所有Bubble.
 */
class BubbleManager: public cocos2d::Layer, private BIdGen
{
public:
    virtual bool init();

    /**
     * 游戏中的泡泡id会由服务器生成并传递
     * @param id 是泡泡的唯一标识
     * @param power 是泡泡的攻击范围
     * @param pos 是泡泡的位置
     */
    Bubble* MakeBubble(int id,int power, cocos2d::Point pos);

    /**
     * @see MakeBubble()
     */
    Bubble* MakeBubble(int power, cocos2d::Point);

    /**
     * 设置某个泡泡爆炸，设置后泡泡会自动被销毁.
     * @param id 泡泡id
     */
    void Explose(int id);

    void SetStatus(int id,int status);

    //是否 block
    bool doesBlock(int x, int y);

    /**
     * 自动根据泡泡的爆炸时间计算泡泡的爆炸和销毁状态
     */
    void update(float dt) override;

    CREATE_FUNC(BubbleManager);

private:
    /**
     * 所有的泡泡列表
     */
    cocos2d::Vector<Bubble*> _bubbleList;
};


#endif
