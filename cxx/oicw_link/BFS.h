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

#define _DEBUG
// #undef _DEBUG

#define _CXX14

#define _BFS
#ifdef _BFS

#include <queue>
#include <vector>

#include <functional>

#include <iostream>

namespace _jcode {
	
	// Graph	
	std::vector<std::vector<int>> makeGraph();
	
	// BFS class
	class Bfs {
	private:
		std::vector<std::vector<int>> Graph_;
		
	public:
		// Constructor
		Bfs(std::vector<std::vector<int>>& argrGraph_) : Graph_(argrGraph_) {	
#ifdef _DEBUG
			std::cout << "Bfs::Bfs()" << std::endl;
#endif
		};
		// Destructor
		virtual ~Bfs();
		
		/* Interface */
		std::queue<int> runBfsBy(int, std::function<void(int)> = std::function<void(int)>(0));
	};
};

#endif