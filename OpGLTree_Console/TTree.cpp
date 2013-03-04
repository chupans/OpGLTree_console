#include "TTree.h"
#include "TNodeCreator.h"

TTree::TTree(void)
{
}

TTree::~TTree(void)
{
}

bool TTree :: CreateTree(float Angle, float Length, TPoint3<float> Root, float Step, int Levels)
{
	vector<TNode*> ToProcess, NextToProcess;
	vector<TNode*> :: iterator it;
	TNodeCreator Cr(Levels, Length);
	TNode* RootNode = new TNode(Root, 0);
	m_RootNode = RootNode;
	ToProcess.push_back(RootNode);
	for (int i = 1; i <= Levels; i++)
	{
		for( it = ToProcess.begin(); it != ToProcess.end(); it++)
		{
			TNode* newNode = Cr.CreateNode(**it);
			(*it)->AddChild(newNode);
			NextToProcess.push_back(newNode);
		}
		ToProcess.clear();
		swap(ToProcess, NextToProcess);
	}
	return true;
}