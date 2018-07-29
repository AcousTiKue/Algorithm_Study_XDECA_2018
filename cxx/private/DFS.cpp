/*
** 
** Theme : [Operations Information & Communications Wing] LINK Algorithm Contest
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.28.
** File Info : 
** Input: 
** Output: 
** 
** */

#define _DFS

#ifdef _DFS

#include "DFS.h"

/* Constructor & Destructor */
_jcode::DFS::~DFS() { };

/* Interface */
// Getter
std::vector<std::vector<int>>& _jcode::DFS::getGraph() const {
	
	return this->Graph_;
};

// Setter
void _jcode::DFS::setGraph(std::vector<std::vector<int>>& argrGraph_) {
	
	this->Graph_ = argrGraph_;
};

/* Util */
void _jcode::DFS::doDfsBy(int argSrcNode_, std::function<void(int)> recordFunction) {
	
	std::vector<bool> isVisited_(Graph_.size());
	
	std::function<void(bool)> doDfs = [&](int argV_) { // argV_ should be starting node.
		
		isVisited_[argV_] = true;
		
		for(auto itor_ = 1; itor_ < Graph_[argV_].size(); itor_++) {
			
			if(Graph_[argV_][itor_] != 0 && !isVisited_[itor_]) {

				recordFunction(itor_);				
				doDfs(itor_);
			}
		}
	};
	
	doDfs(argSrcNode_);
};


#endif