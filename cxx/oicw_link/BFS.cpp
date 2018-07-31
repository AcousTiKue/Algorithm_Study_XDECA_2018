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


#define _CXX14

#define _BFS
#ifdef _BFS

#include "BFS.h"

// Destructor
_jcode::Bfs::~Bfs() {
#ifdef _DEBUG
	std::cout << "Bfs::~Bfs()" << std::endl;
#endif
};


// Interface
std::queue<int> _jcode::Bfs::runBfsBy(int argvSrc_, std::function<void(int)> userDefinedRecordingFunction_) {
#ifdef _DEBUG
	std::cout << "Bfs::runBfsBy()" << std::endl;
#endif
	
	std::queue<int> Queue_;
	
	std::function<void(int)> BFS = [&](int) {
		

		}
	};
	
	BFS();
	
	
};





#endif