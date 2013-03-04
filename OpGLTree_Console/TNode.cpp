#include "TNode.h"

bool TNode :: AddChild(TNode *Child)
{
	m_Childs.push_back(Child);
	return true;
}
TNode :: TNode(TPoint3<float> Position, int Level)
{
	m_Position = Position;
	m_Level = Level;
}
TNode :: ~TNode()
{
}
TPoint3<float> TNode :: GetPosition() const
{
	return m_Position;
}
int TNode :: GetLevel() const
{
	return m_Level;
}