#pragma once
#include "TNode.h"
#include <vector>
using namespace std;

class TTree
{
private:
	TNode* m_RootNode;
	int m_LevelsCount;
	int m_NodesCount;
public:
	TTree(void);
	~TTree(void);
	bool CreateTree(float Angle, float Length, TPoint3<float> Root, float Step, int Levels);
};
