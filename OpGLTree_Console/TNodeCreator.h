#pragma once
#include "TNode.h"

class TNodeCreator
{
private:
	float m_MinLength;
	int m_MaxLevel;
public:
	TNodeCreator(int MaxLevel, float Shift);
	~TNodeCreator(void);
	TNode* CreateNode(const TNode From);
	float GetXShift(int Level);
	float GetYShift(int Level);
	float GetZShift(int Level);
};
