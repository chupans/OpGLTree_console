#include "TNodeCreator.h"
#include "TPoint3.h"
#include <ctime>
#include <cstdlib>

TNodeCreator :: TNodeCreator(int MaxLevel, float Shift)
{
	m_MaxLevel = MaxLevel;
	m_MinLength = Shift;
}

TNodeCreator :: ~TNodeCreator(void)
{

}

TNode* TNodeCreator :: CreateNode(const TNode From)
{
	srand(time(0));
	TPoint3<float> OldPos = From.GetPosition();
	float NewX, NewY, NewZ;
	int NewNodeLevel = From.GetLevel() + 1;
	NewX = OldPos.GetX()+ (rand()%2 == 0 ? 1 : -1)*GetXShift(NewNodeLevel)*((float)(rand()% 31) / 100 + 0.7F);	// К старой координате прибавляем Сдвиг умноженный на
	NewY = OldPos.GetY()+ (rand()%2 == 0 ? 1 : -1)*GetYShift(NewNodeLevel)*((float)(rand()% 31) / 100 + 0.7F);	// 0,7 - 1.0 умноженный на -1 или 1
	NewZ = OldPos.GetZ()+ GetZShift(NewNodeLevel)*((float)(rand()% 31) / 100 + 0.7F);
	TPoint3<float> NewPos(NewX, NewY, NewZ);
	TNode* pNewNode;
	pNewNode = new TNode(NewPos, NewNodeLevel);
	return pNewNode;
}

float TNodeCreator :: GetXShift(int Level)
{
	return (float)(m_MaxLevel - Level)*m_MinLength;
}

float TNodeCreator :: GetYShift(int Level)
{
	return (float)(m_MaxLevel - Level)*m_MinLength;
}

float TNodeCreator :: GetZShift(int Level)
{
	return (float)(m_MaxLevel - Level)*m_MinLength;
}