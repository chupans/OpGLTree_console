#pragma once
#include "TPoint3.h"
#include <vector>
using namespace std;

class TNode
{
private:
	vector<TNode*> m_Childs;
	TPoint3<float> m_Position;
	int m_Level;
public:
	bool AddChild(TNode *Child);
	TNode(TPoint3<float> Position, int Level);
	~TNode();
	void Process();
	TPoint3<float> GetPosition() const;
	int GetLevel() const;
};